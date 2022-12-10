/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceValueType.h>
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
   * <p>The dynamic value of the resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ResourceValue">AWS
   * API Reference</a></p>
   */
  class ResourceValue
  {
  public:
    AWS_CONFIGSERVICE_API ResourceValue();
    AWS_CONFIGSERVICE_API ResourceValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API ResourceValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value is a resource ID.</p>
     */
    inline const ResourceValueType& GetValue() const{ return m_value; }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline void SetValue(const ResourceValueType& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline void SetValue(ResourceValueType&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value is a resource ID.</p>
     */
    inline ResourceValue& WithValue(const ResourceValueType& value) { SetValue(value); return *this;}

    /**
     * <p>The value is a resource ID.</p>
     */
    inline ResourceValue& WithValue(ResourceValueType&& value) { SetValue(std::move(value)); return *this;}

  private:

    ResourceValueType m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
