/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/SipMediaApplicationEndpoint.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateSipMediaApplicationRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateSipMediaApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipMediaApplication"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline CreateSipMediaApplicationRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline CreateSipMediaApplicationRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline CreateSipMediaApplicationRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The SIP media application name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The SIP media application name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The SIP media application name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The SIP media application name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The SIP media application name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The SIP media application name.</p>
     */
    inline CreateSipMediaApplicationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The SIP media application name.</p>
     */
    inline CreateSipMediaApplicationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The SIP media application name.</p>
     */
    inline CreateSipMediaApplicationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline const Aws::Vector<SipMediaApplicationEndpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline void SetEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline void SetEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline CreateSipMediaApplicationRequest& WithEndpoints(const Aws::Vector<SipMediaApplicationEndpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline CreateSipMediaApplicationRequest& WithEndpoints(Aws::Vector<SipMediaApplicationEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline CreateSipMediaApplicationRequest& AddEndpoints(const SipMediaApplicationEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * <p>List of endpoints (Lambda Amazon Resource Names) specified for the SIP media
     * application. Currently, only one endpoint is supported.</p>
     */
    inline CreateSipMediaApplicationRequest& AddEndpoints(SipMediaApplicationEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SipMediaApplicationEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
