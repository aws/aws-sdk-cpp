/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/User.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a>GetUser</a> request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetUserResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetUserResult
  {
  public:
    GetUserResult();
    GetUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A structure containing details about the IAM user.</p> <important> <p>Due to
     * a service issue, password last used data does not include password use from May
     * 3, 2018 22:50 PDT to May 23, 2018 14:08 PDT. This affects <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_finding-unused.html">last
     * sign-in</a> dates shown in the IAM console and password last used dates in the
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_getting-report.html">IAM
     * credential report</a>, and returned by this GetUser API. If users signed in
     * during the affected time, the password last used date that is returned is the
     * date the user last signed in before May 3, 2018. For users that signed in after
     * May 23, 2018 14:08 PDT, the returned password last used date is accurate.</p>
     * <p>You can use password last used information to identify unused credentials for
     * deletion. For example, you might delete users who did not sign in to AWS in the
     * last 90 days. In cases like this, we recommend that you adjust your evaluation
     * window to include dates after May 23, 2018. Alternatively, if your users use
     * access keys to access AWS programmatically you can refer to access key last used
     * information because it is accurate for all dates. </p> </important>
     */
    inline const User& GetUser() const{ return m_user; }

    /**
     * <p>A structure containing details about the IAM user.</p> <important> <p>Due to
     * a service issue, password last used data does not include password use from May
     * 3, 2018 22:50 PDT to May 23, 2018 14:08 PDT. This affects <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_finding-unused.html">last
     * sign-in</a> dates shown in the IAM console and password last used dates in the
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_getting-report.html">IAM
     * credential report</a>, and returned by this GetUser API. If users signed in
     * during the affected time, the password last used date that is returned is the
     * date the user last signed in before May 3, 2018. For users that signed in after
     * May 23, 2018 14:08 PDT, the returned password last used date is accurate.</p>
     * <p>You can use password last used information to identify unused credentials for
     * deletion. For example, you might delete users who did not sign in to AWS in the
     * last 90 days. In cases like this, we recommend that you adjust your evaluation
     * window to include dates after May 23, 2018. Alternatively, if your users use
     * access keys to access AWS programmatically you can refer to access key last used
     * information because it is accurate for all dates. </p> </important>
     */
    inline void SetUser(const User& value) { m_user = value; }

    /**
     * <p>A structure containing details about the IAM user.</p> <important> <p>Due to
     * a service issue, password last used data does not include password use from May
     * 3, 2018 22:50 PDT to May 23, 2018 14:08 PDT. This affects <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_finding-unused.html">last
     * sign-in</a> dates shown in the IAM console and password last used dates in the
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_getting-report.html">IAM
     * credential report</a>, and returned by this GetUser API. If users signed in
     * during the affected time, the password last used date that is returned is the
     * date the user last signed in before May 3, 2018. For users that signed in after
     * May 23, 2018 14:08 PDT, the returned password last used date is accurate.</p>
     * <p>You can use password last used information to identify unused credentials for
     * deletion. For example, you might delete users who did not sign in to AWS in the
     * last 90 days. In cases like this, we recommend that you adjust your evaluation
     * window to include dates after May 23, 2018. Alternatively, if your users use
     * access keys to access AWS programmatically you can refer to access key last used
     * information because it is accurate for all dates. </p> </important>
     */
    inline void SetUser(User&& value) { m_user = std::move(value); }

    /**
     * <p>A structure containing details about the IAM user.</p> <important> <p>Due to
     * a service issue, password last used data does not include password use from May
     * 3, 2018 22:50 PDT to May 23, 2018 14:08 PDT. This affects <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_finding-unused.html">last
     * sign-in</a> dates shown in the IAM console and password last used dates in the
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_getting-report.html">IAM
     * credential report</a>, and returned by this GetUser API. If users signed in
     * during the affected time, the password last used date that is returned is the
     * date the user last signed in before May 3, 2018. For users that signed in after
     * May 23, 2018 14:08 PDT, the returned password last used date is accurate.</p>
     * <p>You can use password last used information to identify unused credentials for
     * deletion. For example, you might delete users who did not sign in to AWS in the
     * last 90 days. In cases like this, we recommend that you adjust your evaluation
     * window to include dates after May 23, 2018. Alternatively, if your users use
     * access keys to access AWS programmatically you can refer to access key last used
     * information because it is accurate for all dates. </p> </important>
     */
    inline GetUserResult& WithUser(const User& value) { SetUser(value); return *this;}

    /**
     * <p>A structure containing details about the IAM user.</p> <important> <p>Due to
     * a service issue, password last used data does not include password use from May
     * 3, 2018 22:50 PDT to May 23, 2018 14:08 PDT. This affects <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_finding-unused.html">last
     * sign-in</a> dates shown in the IAM console and password last used dates in the
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_getting-report.html">IAM
     * credential report</a>, and returned by this GetUser API. If users signed in
     * during the affected time, the password last used date that is returned is the
     * date the user last signed in before May 3, 2018. For users that signed in after
     * May 23, 2018 14:08 PDT, the returned password last used date is accurate.</p>
     * <p>You can use password last used information to identify unused credentials for
     * deletion. For example, you might delete users who did not sign in to AWS in the
     * last 90 days. In cases like this, we recommend that you adjust your evaluation
     * window to include dates after May 23, 2018. Alternatively, if your users use
     * access keys to access AWS programmatically you can refer to access key last used
     * information because it is accurate for all dates. </p> </important>
     */
    inline GetUserResult& WithUser(User&& value) { SetUser(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetUserResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetUserResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    User m_user;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
