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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationExecutionTargetsFilterKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Filters for the association execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecutionTargetsFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API AssociationExecutionTargetsFilter
  {
  public:
    AssociationExecutionTargetsFilter();
    AssociationExecutionTargetsFilter(Aws::Utils::Json::JsonView jsonValue);
    AssociationExecutionTargetsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key value used in the request.</p>
     */
    inline const AssociationExecutionTargetsFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline void SetKey(const AssociationExecutionTargetsFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline void SetKey(AssociationExecutionTargetsFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionTargetsFilter& WithKey(const AssociationExecutionTargetsFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionTargetsFilter& WithKey(AssociationExecutionTargetsFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The value specified for the key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value specified for the key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value specified for the key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value specified for the key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionTargetsFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionTargetsFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionTargetsFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    AssociationExecutionTargetsFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
