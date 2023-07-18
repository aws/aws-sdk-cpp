/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.defaults;

import lombok.Data;

@Data
public class BaseOptionModifier {
    enum ModifierType {
        MULTIPLY,
        ADD,
        OVERRIDE
    }

    ModifierType type;

    Float multiply;
    Integer add;
    BaseOption override;


    public BaseOption applyModificationOn(final BaseOption baseOption) throws Exception {
        BaseOption returnOption;
        if (ModifierType.OVERRIDE == this.type) {
            returnOption = this.override;
        } else if (ModifierType.ADD == this.type) {
            returnOption = new BaseOption();
            returnOption.setType(baseOption.getType());
            returnOption.setIntValue(baseOption.getIntValue() + this.add);
        } else if (ModifierType.MULTIPLY == this.type) {
            returnOption = new BaseOption();
            returnOption.setType(baseOption.getType());
            returnOption.setIntValue((int) (baseOption.getIntValue() * this.multiply));
        } else {
            throw new Exception("Unknown modification!");
        }
        return returnOption;
    }
}

