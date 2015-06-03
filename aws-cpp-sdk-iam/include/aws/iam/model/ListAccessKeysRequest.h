/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /*
  */
  class AWS_IAM_API ListAccessKeysRequest : public IAMRequest
  {
  public:
    ListAccessKeysRequest();
    Aws::String SerializePayload() const override;


    /*
     <p>The name of the user.</p>
    */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    /*
     <p>The name of the user.</p>
    */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /*
     <p>The name of the user.</p>
    */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /*
     <p>The name of the user.</p>
    */
    inline ListAccessKeysRequest&  WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /*
     <p>The name of the user.</p>
    */
    inline ListAccessKeysRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /*
     <p> Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    /*
     <p> Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /*
     <p> Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /*
     <p> Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline ListAccessKeysRequest&  WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /*
     <p> Use this parameter only when paginating results, and only in a subsequent request after you've received a response where the results are truncated. Set it to the value of the <code>Marker</code> element in the response you just received. </p>
    */
    inline ListAccessKeysRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

    /*
     <p> Use this parameter only when paginating results to indicate the maximum number of keys you want in the response. If there are additional keys beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>. This parameter is optional. If you do not include it, it defaults to 100. </p>
    */
    inline long GetMaxItems() const{ return m_maxItems; }
    /*
     <p> Use this parameter only when paginating results to indicate the maximum number of keys you want in the response. If there are additional keys beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>. This parameter is optional. If you do not include it, it defaults to 100. </p>
    */
    inline void SetMaxItems(long value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /*
     <p> Use this parameter only when paginating results to indicate the maximum number of keys you want in the response. If there are additional keys beyond the maximum you specify, the <code>IsTruncated</code> response element is <code>true</code>. This parameter is optional. If you do not include it, it defaults to 100. </p>
    */
    inline ListAccessKeysRequest&  WithMaxItems(long value) { SetMaxItems(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    long m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
