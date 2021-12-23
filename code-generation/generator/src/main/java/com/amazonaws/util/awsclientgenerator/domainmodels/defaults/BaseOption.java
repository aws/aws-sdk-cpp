/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.domainmodels.defaults;

import lombok.Data;

@Data
public class BaseOption {
    enum OptionType {
        INTEGER,
        STRING
    }

    OptionType type;

    Integer intValue;
    String strValue;

    public String getAsSourceString() throws Exception {
        if (OptionType.INTEGER == this.type) {
            return intValue.toString();
        } else if (OptionType.STRING == this.type) {
            return new StringBuilder("\"").append(strValue).append("\"").toString();
        }
        throw new Exception("Base option value not set!");
    }
}

