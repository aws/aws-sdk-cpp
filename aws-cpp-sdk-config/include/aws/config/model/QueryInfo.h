/*
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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/config/model/FieldInfo.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Details about the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/QueryInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API QueryInfo
  {
  public:
    QueryInfo();
    QueryInfo(Aws::Utils::Json::JsonView jsonValue);
    QueryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline const Aws::Vector<FieldInfo>& GetSelectFields() const{ return m_selectFields; }

    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline bool SelectFieldsHasBeenSet() const { return m_selectFieldsHasBeenSet; }

    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline void SetSelectFields(const Aws::Vector<FieldInfo>& value) { m_selectFieldsHasBeenSet = true; m_selectFields = value; }

    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline void SetSelectFields(Aws::Vector<FieldInfo>&& value) { m_selectFieldsHasBeenSet = true; m_selectFields = std::move(value); }

    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline QueryInfo& WithSelectFields(const Aws::Vector<FieldInfo>& value) { SetSelectFields(value); return *this;}

    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline QueryInfo& WithSelectFields(Aws::Vector<FieldInfo>&& value) { SetSelectFields(std::move(value)); return *this;}

    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline QueryInfo& AddSelectFields(const FieldInfo& value) { m_selectFieldsHasBeenSet = true; m_selectFields.push_back(value); return *this; }

    /**
     * <p>Returns a <code>FieldInfo</code> object.</p>
     */
    inline QueryInfo& AddSelectFields(FieldInfo&& value) { m_selectFieldsHasBeenSet = true; m_selectFields.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FieldInfo> m_selectFields;
    bool m_selectFieldsHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
