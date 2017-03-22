/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/NetworkProfileType.h>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class AWS_DEVICEFARM_API ListNetworkProfilesRequest : public DeviceFarmRequest
  {
  public:
    ListNetworkProfilesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * network profiles.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * network profiles.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * network profiles.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * network profiles.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * network profiles.</p>
     */
    inline ListNetworkProfilesRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * network profiles.</p>
     */
    inline ListNetworkProfilesRequest& WithArn(Aws::String&& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the project for which you want to list
     * network profiles.</p>
     */
    inline ListNetworkProfilesRequest& WithArn(const char* value) { SetArn(value); return *this;}

    /**
     * <p>The type of network profile you wish to return information about. Valid
     * values are listed below.</p>
     */
    inline const NetworkProfileType& GetType() const{ return m_type; }

    /**
     * <p>The type of network profile you wish to return information about. Valid
     * values are listed below.</p>
     */
    inline void SetType(const NetworkProfileType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of network profile you wish to return information about. Valid
     * values are listed below.</p>
     */
    inline void SetType(NetworkProfileType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of network profile you wish to return information about. Valid
     * values are listed below.</p>
     */
    inline ListNetworkProfilesRequest& WithType(const NetworkProfileType& value) { SetType(value); return *this;}

    /**
     * <p>The type of network profile you wish to return information about. Valid
     * values are listed below.</p>
     */
    inline ListNetworkProfilesRequest& WithType(NetworkProfileType&& value) { SetType(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListNetworkProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListNetworkProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListNetworkProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_arn;
    bool m_arnHasBeenSet;
    NetworkProfileType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
