/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/EndpointType.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for the endpoint for your Amazon
   * Kendra experience.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ExperienceEndpoint">AWS
   * API Reference</a></p>
   */
  class ExperienceEndpoint
  {
  public:
    AWS_KENDRA_API ExperienceEndpoint() = default;
    AWS_KENDRA_API ExperienceEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExperienceEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of endpoint for your Amazon Kendra experience. The type currently
     * available is <code>HOME</code>, which is a unique and fully hosted URL to the
     * home page of your Amazon Kendra experience.</p>
     */
    inline EndpointType GetEndpointType() const { return m_endpointType; }
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }
    inline void SetEndpointType(EndpointType value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }
    inline ExperienceEndpoint& WithEndpointType(EndpointType value) { SetEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    ExperienceEndpoint& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}
  private:

    EndpointType m_endpointType{EndpointType::NOT_SET};
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
