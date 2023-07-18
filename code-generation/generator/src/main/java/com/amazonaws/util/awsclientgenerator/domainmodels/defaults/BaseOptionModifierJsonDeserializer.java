package com.amazonaws.util.awsclientgenerator.domainmodels.defaults;

import com.google.gson.JsonDeserializationContext;
import com.google.gson.JsonDeserializer;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import com.google.gson.JsonParseException;
import com.google.gson.JsonPrimitive;

import java.lang.reflect.Type;

public class BaseOptionModifierJsonDeserializer implements JsonDeserializer<BaseOptionModifier> {

    @Override
    public BaseOptionModifier deserialize(JsonElement jsonElement, Type type,
                                          JsonDeserializationContext context) throws JsonParseException {
        if (!jsonElement.isJsonPrimitive()) {
            JsonObject jsonObject = jsonElement.getAsJsonObject();
            if (1 == jsonObject.entrySet().size()) {
                BaseOptionModifier baseOptionModifier = new BaseOptionModifier();

                if (jsonObject.has("override")) {
                    baseOptionModifier.setType(BaseOptionModifier.ModifierType.OVERRIDE);
                    JsonElement jsonOverrideElement = jsonObject.getAsJsonPrimitive("override");

                    BaseOption baseOptionOverride = context.deserialize(jsonOverrideElement, BaseOption.class);
                    baseOptionModifier.setOverride(baseOptionOverride);

                    return baseOptionModifier;
                } else if (jsonObject.has("add")) {
                    JsonPrimitive jsonAddPrimitive = jsonObject.getAsJsonPrimitive("add");
                    if (jsonAddPrimitive.isNumber()) {
                        baseOptionModifier.setType(BaseOptionModifier.ModifierType.ADD);
                        baseOptionModifier.setAdd(jsonAddPrimitive.getAsInt());
                    }
                    return baseOptionModifier;
                } else if (jsonObject.has("multiply")) {
                    JsonPrimitive jsonAddPrimitive = jsonObject.getAsJsonPrimitive("multiply");
                    if (jsonAddPrimitive.isNumber()) {
                        baseOptionModifier.setType(BaseOptionModifier.ModifierType.MULTIPLY);
                        baseOptionModifier.setMultiply(jsonAddPrimitive.getAsFloat());
                    }
                    return baseOptionModifier;
                }
            }
        }

        throw new JsonParseException("Unexpected BaseOptionModifier JSON value");
    }
}
