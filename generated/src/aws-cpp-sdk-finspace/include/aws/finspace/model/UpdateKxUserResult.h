/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace finspace
{
namespace Model
{
  class UpdateKxUserResult
  {
  public:
    AWS_FINSPACE_API UpdateKxUserResult();
    AWS_FINSPACE_API UpdateKxUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API UpdateKxUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A unique identifier for the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique identifier for the user.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>A unique identifier for the user.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>A unique identifier for the user.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>A unique identifier for the user.</p>
     */
    inline UpdateKxUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique identifier for the user.</p>
     */
    inline UpdateKxUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the user.</p>
     */
    inline UpdateKxUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::String& GetUserArn() const{ return m_userArn; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetUserArn(const Aws::String& value) { m_userArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetUserArn(Aws::String&& value) { m_userArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline void SetUserArn(const char* value) { m_userArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline UpdateKxUserResult& WithUserArn(const Aws::String& value) { SetUserArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline UpdateKxUserResult& WithUserArn(Aws::String&& value) { SetUserArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the user. For more
     * information about ARNs and how to use ARNs in policies, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>. </p>
     */
    inline UpdateKxUserResult& WithUserArn(const char* value) { SetUserArn(value); return *this;}


    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline UpdateKxUserResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline UpdateKxUserResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the kdb environment.</p>
     */
    inline UpdateKxUserResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRole = value; }

    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRole = std::move(value); }

    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline void SetIamRole(const char* value) { m_iamRole.assign(value); }

    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline UpdateKxUserResult& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline UpdateKxUserResult& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role ARN that is associated with the user.</p>
     */
    inline UpdateKxUserResult& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateKxUserResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateKxUserResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateKxUserResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_userName;

    Aws::String m_userArn;

    Aws::String m_environmentId;

    Aws::String m_iamRole;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
