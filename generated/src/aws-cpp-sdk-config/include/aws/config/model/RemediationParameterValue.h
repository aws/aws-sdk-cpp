/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/ResourceValue.h>
#include <aws/config/model/StaticValue.h>
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
   * <p>The value is either a dynamic (resource) value or a static value. You must
   * select either a dynamic value or a static value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/RemediationParameterValue">AWS
   * API Reference</a></p>
   */
  class RemediationParameterValue
  {
  public:
    AWS_CONFIGSERVICE_API RemediationParameterValue();
    AWS_CONFIGSERVICE_API RemediationParameterValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API RemediationParameterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline const ResourceValue& GetResourceValue() const{ return m_resourceValue; }

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline bool ResourceValueHasBeenSet() const { return m_resourceValueHasBeenSet; }

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline void SetResourceValue(const ResourceValue& value) { m_resourceValueHasBeenSet = true; m_resourceValue = value; }

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline void SetResourceValue(ResourceValue&& value) { m_resourceValueHasBeenSet = true; m_resourceValue = std::move(value); }

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline RemediationParameterValue& WithResourceValue(const ResourceValue& value) { SetResourceValue(value); return *this;}

    /**
     * <p>The value is dynamic and changes at run-time.</p>
     */
    inline RemediationParameterValue& WithResourceValue(ResourceValue&& value) { SetResourceValue(std::move(value)); return *this;}


    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline const StaticValue& GetStaticValue() const{ return m_staticValue; }

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline bool StaticValueHasBeenSet() const { return m_staticValueHasBeenSet; }

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline void SetStaticValue(const StaticValue& value) { m_staticValueHasBeenSet = true; m_staticValue = value; }

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline void SetStaticValue(StaticValue&& value) { m_staticValueHasBeenSet = true; m_staticValue = std::move(value); }

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline RemediationParameterValue& WithStaticValue(const StaticValue& value) { SetStaticValue(value); return *this;}

    /**
     * <p>The value is static and does not change at run-time.</p>
     */
    inline RemediationParameterValue& WithStaticValue(StaticValue&& value) { SetStaticValue(std::move(value)); return *this;}

  private:

    ResourceValue m_resourceValue;
    bool m_resourceValueHasBeenSet = false;

    StaticValue m_staticValue;
    bool m_staticValueHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
