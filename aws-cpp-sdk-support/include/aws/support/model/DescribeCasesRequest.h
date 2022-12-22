/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/SupportRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Support
{
namespace Model
{

  /**
   */
  class DescribeCasesRequest : public SupportRequest
  {
  public:
    AWS_SUPPORT_API DescribeCasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeCases"; }

    AWS_SUPPORT_API Aws::String SerializePayload() const override;

    AWS_SUPPORT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCaseIdList() const{ return m_caseIdList; }

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline bool CaseIdListHasBeenSet() const { return m_caseIdListHasBeenSet; }

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline void SetCaseIdList(const Aws::Vector<Aws::String>& value) { m_caseIdListHasBeenSet = true; m_caseIdList = value; }

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline void SetCaseIdList(Aws::Vector<Aws::String>&& value) { m_caseIdListHasBeenSet = true; m_caseIdList = std::move(value); }

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline DescribeCasesRequest& WithCaseIdList(const Aws::Vector<Aws::String>& value) { SetCaseIdList(value); return *this;}

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline DescribeCasesRequest& WithCaseIdList(Aws::Vector<Aws::String>&& value) { SetCaseIdList(std::move(value)); return *this;}

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline DescribeCasesRequest& AddCaseIdList(const Aws::String& value) { m_caseIdListHasBeenSet = true; m_caseIdList.push_back(value); return *this; }

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline DescribeCasesRequest& AddCaseIdList(Aws::String&& value) { m_caseIdListHasBeenSet = true; m_caseIdList.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of ID numbers of the support cases you want returned. The maximum
     * number of cases is 100.</p>
     */
    inline DescribeCasesRequest& AddCaseIdList(const char* value) { m_caseIdListHasBeenSet = true; m_caseIdList.push_back(value); return *this; }


    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline const Aws::String& GetDisplayId() const{ return m_displayId; }

    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline bool DisplayIdHasBeenSet() const { return m_displayIdHasBeenSet; }

    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline void SetDisplayId(const Aws::String& value) { m_displayIdHasBeenSet = true; m_displayId = value; }

    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline void SetDisplayId(Aws::String&& value) { m_displayIdHasBeenSet = true; m_displayId = std::move(value); }

    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline void SetDisplayId(const char* value) { m_displayIdHasBeenSet = true; m_displayId.assign(value); }

    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline DescribeCasesRequest& WithDisplayId(const Aws::String& value) { SetDisplayId(value); return *this;}

    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline DescribeCasesRequest& WithDisplayId(Aws::String&& value) { SetDisplayId(std::move(value)); return *this;}

    /**
     * <p>The ID displayed for a case in the Amazon Web Services Support Center user
     * interface.</p>
     */
    inline DescribeCasesRequest& WithDisplayId(const char* value) { SetDisplayId(value); return *this;}


    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetAfterTime() const{ return m_afterTime; }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline bool AfterTimeHasBeenSet() const { return m_afterTimeHasBeenSet; }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline void SetAfterTime(const Aws::String& value) { m_afterTimeHasBeenSet = true; m_afterTime = value; }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline void SetAfterTime(Aws::String&& value) { m_afterTimeHasBeenSet = true; m_afterTime = std::move(value); }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline void SetAfterTime(const char* value) { m_afterTimeHasBeenSet = true; m_afterTime.assign(value); }

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline DescribeCasesRequest& WithAfterTime(const Aws::String& value) { SetAfterTime(value); return *this;}

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline DescribeCasesRequest& WithAfterTime(Aws::String&& value) { SetAfterTime(std::move(value)); return *this;}

    /**
     * <p>The start date for a filtered date search on support case communications.
     * Case communications are available for 12 months after creation.</p>
     */
    inline DescribeCasesRequest& WithAfterTime(const char* value) { SetAfterTime(value); return *this;}


    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline const Aws::String& GetBeforeTime() const{ return m_beforeTime; }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline bool BeforeTimeHasBeenSet() const { return m_beforeTimeHasBeenSet; }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline void SetBeforeTime(const Aws::String& value) { m_beforeTimeHasBeenSet = true; m_beforeTime = value; }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline void SetBeforeTime(Aws::String&& value) { m_beforeTimeHasBeenSet = true; m_beforeTime = std::move(value); }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline void SetBeforeTime(const char* value) { m_beforeTimeHasBeenSet = true; m_beforeTime.assign(value); }

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline DescribeCasesRequest& WithBeforeTime(const Aws::String& value) { SetBeforeTime(value); return *this;}

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline DescribeCasesRequest& WithBeforeTime(Aws::String&& value) { SetBeforeTime(std::move(value)); return *this;}

    /**
     * <p>The end date for a filtered date search on support case communications. Case
     * communications are available for 12 months after creation.</p>
     */
    inline DescribeCasesRequest& WithBeforeTime(const char* value) { SetBeforeTime(value); return *this;}


    /**
     * <p>Specifies whether to include resolved support cases in the
     * <code>DescribeCases</code> response. By default, resolved cases aren't
     * included.</p>
     */
    inline bool GetIncludeResolvedCases() const{ return m_includeResolvedCases; }

    /**
     * <p>Specifies whether to include resolved support cases in the
     * <code>DescribeCases</code> response. By default, resolved cases aren't
     * included.</p>
     */
    inline bool IncludeResolvedCasesHasBeenSet() const { return m_includeResolvedCasesHasBeenSet; }

    /**
     * <p>Specifies whether to include resolved support cases in the
     * <code>DescribeCases</code> response. By default, resolved cases aren't
     * included.</p>
     */
    inline void SetIncludeResolvedCases(bool value) { m_includeResolvedCasesHasBeenSet = true; m_includeResolvedCases = value; }

    /**
     * <p>Specifies whether to include resolved support cases in the
     * <code>DescribeCases</code> response. By default, resolved cases aren't
     * included.</p>
     */
    inline DescribeCasesRequest& WithIncludeResolvedCases(bool value) { SetIncludeResolvedCases(value); return *this;}


    /**
     * <p>A resumption point for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline DescribeCasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline DescribeCasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A resumption point for pagination.</p>
     */
    inline DescribeCasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return before paginating.</p>
     */
    inline DescribeCasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline const Aws::String& GetLanguage() const{ return m_language; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(const Aws::String& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(Aws::String&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline void SetLanguage(const char* value) { m_languageHasBeenSet = true; m_language.assign(value); }

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline DescribeCasesRequest& WithLanguage(const Aws::String& value) { SetLanguage(value); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline DescribeCasesRequest& WithLanguage(Aws::String&& value) { SetLanguage(std::move(value)); return *this;}

    /**
     * <p>The language in which Amazon Web Services Support handles the case. Amazon
     * Web Services Support currently supports English ("en") and Japanese ("ja"). You
     * must specify the ISO 639-1 code for the <code>language</code> parameter if you
     * want support in that language.</p>
     */
    inline DescribeCasesRequest& WithLanguage(const char* value) { SetLanguage(value); return *this;}


    /**
     * <p>Specifies whether to include communications in the <code>DescribeCases</code>
     * response. By default, communications are included.</p>
     */
    inline bool GetIncludeCommunications() const{ return m_includeCommunications; }

    /**
     * <p>Specifies whether to include communications in the <code>DescribeCases</code>
     * response. By default, communications are included.</p>
     */
    inline bool IncludeCommunicationsHasBeenSet() const { return m_includeCommunicationsHasBeenSet; }

    /**
     * <p>Specifies whether to include communications in the <code>DescribeCases</code>
     * response. By default, communications are included.</p>
     */
    inline void SetIncludeCommunications(bool value) { m_includeCommunicationsHasBeenSet = true; m_includeCommunications = value; }

    /**
     * <p>Specifies whether to include communications in the <code>DescribeCases</code>
     * response. By default, communications are included.</p>
     */
    inline DescribeCasesRequest& WithIncludeCommunications(bool value) { SetIncludeCommunications(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_caseIdList;
    bool m_caseIdListHasBeenSet = false;

    Aws::String m_displayId;
    bool m_displayIdHasBeenSet = false;

    Aws::String m_afterTime;
    bool m_afterTimeHasBeenSet = false;

    Aws::String m_beforeTime;
    bool m_beforeTimeHasBeenSet = false;

    bool m_includeResolvedCases;
    bool m_includeResolvedCasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_language;
    bool m_languageHasBeenSet = false;

    bool m_includeCommunications;
    bool m_includeCommunicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
