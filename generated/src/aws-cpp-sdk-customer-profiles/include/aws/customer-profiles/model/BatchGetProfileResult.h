/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/BatchGetProfileError.h>
#include <aws/customer-profiles/model/Profile.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CustomerProfiles
{
namespace Model
{
  class BatchGetProfileResult
  {
  public:
    AWS_CUSTOMERPROFILES_API BatchGetProfileResult();
    AWS_CUSTOMERPROFILES_API BatchGetProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CUSTOMERPROFILES_API BatchGetProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>For information about the errors that are common to all actions, see <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/CommonErrors.html">Common
     * Errors</a>.</p>
     */
    inline const Aws::Vector<BatchGetProfileError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchGetProfileError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchGetProfileError>&& value) { m_errors = std::move(value); }
    inline BatchGetProfileResult& WithErrors(const Aws::Vector<BatchGetProfileError>& value) { SetErrors(value); return *this;}
    inline BatchGetProfileResult& WithErrors(Aws::Vector<BatchGetProfileError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchGetProfileResult& AddErrors(const BatchGetProfileError& value) { m_errors.push_back(value); return *this; }
    inline BatchGetProfileResult& AddErrors(BatchGetProfileError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Array of Profile Objects.</p>
     */
    inline const Aws::Vector<Profile>& GetProfiles() const{ return m_profiles; }
    inline void SetProfiles(const Aws::Vector<Profile>& value) { m_profiles = value; }
    inline void SetProfiles(Aws::Vector<Profile>&& value) { m_profiles = std::move(value); }
    inline BatchGetProfileResult& WithProfiles(const Aws::Vector<Profile>& value) { SetProfiles(value); return *this;}
    inline BatchGetProfileResult& WithProfiles(Aws::Vector<Profile>&& value) { SetProfiles(std::move(value)); return *this;}
    inline BatchGetProfileResult& AddProfiles(const Profile& value) { m_profiles.push_back(value); return *this; }
    inline BatchGetProfileResult& AddProfiles(Profile&& value) { m_profiles.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGetProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGetProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGetProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchGetProfileError> m_errors;

    Aws::Vector<Profile> m_profiles;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
