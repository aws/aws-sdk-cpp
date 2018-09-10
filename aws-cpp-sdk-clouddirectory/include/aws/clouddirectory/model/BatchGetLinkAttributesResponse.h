﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/AttributeKeyAndValue.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Represents the output of a <a>GetLinkAttributes</a> response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/BatchGetLinkAttributesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchGetLinkAttributesResponse
  {
  public:
    BatchGetLinkAttributesResponse();
    BatchGetLinkAttributesResponse(Aws::Utils::Json::JsonView jsonValue);
    BatchGetLinkAttributesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline const Aws::Vector<AttributeKeyAndValue>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline BatchGetLinkAttributesResponse& WithAttributes(const Aws::Vector<AttributeKeyAndValue>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline BatchGetLinkAttributesResponse& WithAttributes(Aws::Vector<AttributeKeyAndValue>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline BatchGetLinkAttributesResponse& AddAttributes(const AttributeKeyAndValue& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes that are associated with the typed link.</p>
     */
    inline BatchGetLinkAttributesResponse& AddAttributes(AttributeKeyAndValue&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AttributeKeyAndValue> m_attributes;
    bool m_attributesHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
