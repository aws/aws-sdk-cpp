/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-serverless/EMRServerless_EXPORTS.h>

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
namespace EMRServerless
{
namespace Model
{

  /**
   * <p>The configuration to use to enable the different types of interactive use
   * cases in an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-serverless-2021-07-13/InteractiveConfiguration">AWS
   * API Reference</a></p>
   */
  class InteractiveConfiguration
  {
  public:
    AWS_EMRSERVERLESS_API InteractiveConfiguration() = default;
    AWS_EMRSERVERLESS_API InteractiveConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API InteractiveConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables you to connect an application to Amazon EMR Studio to run interactive
     * workloads in a notebook.</p>
     */
    inline bool GetStudioEnabled() const { return m_studioEnabled; }
    inline bool StudioEnabledHasBeenSet() const { return m_studioEnabledHasBeenSet; }
    inline void SetStudioEnabled(bool value) { m_studioEnabledHasBeenSet = true; m_studioEnabled = value; }
    inline InteractiveConfiguration& WithStudioEnabled(bool value) { SetStudioEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables an Apache Livy endpoint that you can connect to and run interactive
     * jobs.</p>
     */
    inline bool GetLivyEndpointEnabled() const { return m_livyEndpointEnabled; }
    inline bool LivyEndpointEnabledHasBeenSet() const { return m_livyEndpointEnabledHasBeenSet; }
    inline void SetLivyEndpointEnabled(bool value) { m_livyEndpointEnabledHasBeenSet = true; m_livyEndpointEnabled = value; }
    inline InteractiveConfiguration& WithLivyEndpointEnabled(bool value) { SetLivyEndpointEnabled(value); return *this;}
    ///@}
  private:

    bool m_studioEnabled{false};
    bool m_studioEnabledHasBeenSet = false;

    bool m_livyEndpointEnabled{false};
    bool m_livyEndpointEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
