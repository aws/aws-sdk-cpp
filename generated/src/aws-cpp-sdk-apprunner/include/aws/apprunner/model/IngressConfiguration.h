/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>

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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Network configuration settings for inbound network traffic.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/IngressConfiguration">AWS
   * API Reference</a></p>
   */
  class IngressConfiguration
  {
  public:
    AWS_APPRUNNER_API IngressConfiguration();
    AWS_APPRUNNER_API IngressConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API IngressConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether your App Runner service is publicly accessible. To make the
     * service publicly accessible set it to <code>True</code>. To make the service
     * privately accessible, from only within an Amazon VPC set it to
     * <code>False</code>. </p>
     */
    inline bool GetIsPubliclyAccessible() const{ return m_isPubliclyAccessible; }

    /**
     * <p>Specifies whether your App Runner service is publicly accessible. To make the
     * service publicly accessible set it to <code>True</code>. To make the service
     * privately accessible, from only within an Amazon VPC set it to
     * <code>False</code>. </p>
     */
    inline bool IsPubliclyAccessibleHasBeenSet() const { return m_isPubliclyAccessibleHasBeenSet; }

    /**
     * <p>Specifies whether your App Runner service is publicly accessible. To make the
     * service publicly accessible set it to <code>True</code>. To make the service
     * privately accessible, from only within an Amazon VPC set it to
     * <code>False</code>. </p>
     */
    inline void SetIsPubliclyAccessible(bool value) { m_isPubliclyAccessibleHasBeenSet = true; m_isPubliclyAccessible = value; }

    /**
     * <p>Specifies whether your App Runner service is publicly accessible. To make the
     * service publicly accessible set it to <code>True</code>. To make the service
     * privately accessible, from only within an Amazon VPC set it to
     * <code>False</code>. </p>
     */
    inline IngressConfiguration& WithIsPubliclyAccessible(bool value) { SetIsPubliclyAccessible(value); return *this;}

  private:

    bool m_isPubliclyAccessible;
    bool m_isPubliclyAccessibleHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
