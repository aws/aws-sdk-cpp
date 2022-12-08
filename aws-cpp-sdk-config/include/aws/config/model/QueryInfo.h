/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class QueryInfo
  {
  public:
    AWS_CONFIGSERVICE_API QueryInfo();
    AWS_CONFIGSERVICE_API QueryInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API QueryInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_selectFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
