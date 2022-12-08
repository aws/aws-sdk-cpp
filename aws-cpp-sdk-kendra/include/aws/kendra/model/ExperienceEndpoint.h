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
    AWS_KENDRA_API ExperienceEndpoint();
    AWS_KENDRA_API ExperienceEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExperienceEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of endpoint for your Amazon Kendra experience. The type currently
     * available is <code>HOME</code>, which is a unique and fully hosted URL to the
     * home page of your Amazon Kendra experience.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint for your Amazon Kendra experience. The type currently
     * available is <code>HOME</code>, which is a unique and fully hosted URL to the
     * home page of your Amazon Kendra experience.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint for your Amazon Kendra experience. The type currently
     * available is <code>HOME</code>, which is a unique and fully hosted URL to the
     * home page of your Amazon Kendra experience.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint for your Amazon Kendra experience. The type currently
     * available is <code>HOME</code>, which is a unique and fully hosted URL to the
     * home page of your Amazon Kendra experience.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint for your Amazon Kendra experience. The type currently
     * available is <code>HOME</code>, which is a unique and fully hosted URL to the
     * home page of your Amazon Kendra experience.</p>
     */
    inline ExperienceEndpoint& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint for your Amazon Kendra experience. The type currently
     * available is <code>HOME</code>, which is a unique and fully hosted URL to the
     * home page of your Amazon Kendra experience.</p>
     */
    inline ExperienceEndpoint& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline ExperienceEndpoint& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline ExperienceEndpoint& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint of your Amazon Kendra experience.</p>
     */
    inline ExperienceEndpoint& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

  private:

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
