/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/CustomVerificationEmailTemplateMetadata.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>The following elements are returned by the service.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ListCustomVerificationEmailTemplatesResponse">AWS
   * API Reference</a></p>
   */
  class ListCustomVerificationEmailTemplatesResult
  {
  public:
    AWS_SESV2_API ListCustomVerificationEmailTemplatesResult();
    AWS_SESV2_API ListCustomVerificationEmailTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API ListCustomVerificationEmailTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline const Aws::Vector<CustomVerificationEmailTemplateMetadata>& GetCustomVerificationEmailTemplates() const{ return m_customVerificationEmailTemplates; }

    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline void SetCustomVerificationEmailTemplates(const Aws::Vector<CustomVerificationEmailTemplateMetadata>& value) { m_customVerificationEmailTemplates = value; }

    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline void SetCustomVerificationEmailTemplates(Aws::Vector<CustomVerificationEmailTemplateMetadata>&& value) { m_customVerificationEmailTemplates = std::move(value); }

    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline ListCustomVerificationEmailTemplatesResult& WithCustomVerificationEmailTemplates(const Aws::Vector<CustomVerificationEmailTemplateMetadata>& value) { SetCustomVerificationEmailTemplates(value); return *this;}

    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline ListCustomVerificationEmailTemplatesResult& WithCustomVerificationEmailTemplates(Aws::Vector<CustomVerificationEmailTemplateMetadata>&& value) { SetCustomVerificationEmailTemplates(std::move(value)); return *this;}

    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline ListCustomVerificationEmailTemplatesResult& AddCustomVerificationEmailTemplates(const CustomVerificationEmailTemplateMetadata& value) { m_customVerificationEmailTemplates.push_back(value); return *this; }

    /**
     * <p>A list of the custom verification email templates that exist in your
     * account.</p>
     */
    inline ListCustomVerificationEmailTemplatesResult& AddCustomVerificationEmailTemplates(CustomVerificationEmailTemplateMetadata&& value) { m_customVerificationEmailTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline ListCustomVerificationEmailTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline ListCustomVerificationEmailTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token indicating that there are additional custom verification email
     * templates available to be listed. Pass this token to a subsequent call to
     * <code>ListCustomVerificationEmailTemplates</code> to retrieve the next 50 custom
     * verification email templates.</p>
     */
    inline ListCustomVerificationEmailTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CustomVerificationEmailTemplateMetadata> m_customVerificationEmailTemplates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
