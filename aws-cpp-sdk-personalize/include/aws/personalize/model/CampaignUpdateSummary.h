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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides a summary of the properties of a campaign update. For a complete
   * listing, call the <a>DescribeCampaign</a> API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/CampaignUpdateSummary">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API CampaignUpdateSummary
  {
  public:
    CampaignUpdateSummary();
    CampaignUpdateSummary(Aws::Utils::Json::JsonView jsonValue);
    CampaignUpdateSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline const Aws::String& GetSolutionVersionArn() const{ return m_solutionVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline bool SolutionVersionArnHasBeenSet() const { return m_solutionVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline void SetSolutionVersionArn(const Aws::String& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline void SetSolutionVersionArn(Aws::String&& value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline void SetSolutionVersionArn(const char* value) { m_solutionVersionArnHasBeenSet = true; m_solutionVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline CampaignUpdateSummary& WithSolutionVersionArn(const Aws::String& value) { SetSolutionVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline CampaignUpdateSummary& WithSolutionVersionArn(Aws::String&& value) { SetSolutionVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the deployed solution version.</p>
     */
    inline CampaignUpdateSummary& WithSolutionVersionArn(const char* value) { SetSolutionVersionArn(value); return *this;}


    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline int GetMinProvisionedTPS() const{ return m_minProvisionedTPS; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline bool MinProvisionedTPSHasBeenSet() const { return m_minProvisionedTPSHasBeenSet; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline void SetMinProvisionedTPS(int value) { m_minProvisionedTPSHasBeenSet = true; m_minProvisionedTPS = value; }

    /**
     * <p>Specifies the requested minimum provisioned transactions (recommendations)
     * per second that Amazon Personalize will support.</p>
     */
    inline CampaignUpdateSummary& WithMinProvisionedTPS(int value) { SetMinProvisionedTPS(value); return *this;}


    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline CampaignUpdateSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline CampaignUpdateSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the campaign update.</p> <p>A campaign update can be in one of
     * the following states:</p> <ul> <li> <p>CREATE PENDING &gt; CREATE IN_PROGRESS
     * &gt; ACTIVE -or- CREATE FAILED</p> </li> <li> <p>DELETE PENDING &gt; DELETE
     * IN_PROGRESS</p> </li> </ul>
     */
    inline CampaignUpdateSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline CampaignUpdateSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline CampaignUpdateSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If a campaign update fails, the reason behind the failure.</p>
     */
    inline CampaignUpdateSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The date and time (in Unix time) that the campaign update was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }

    /**
     * <p>The date and time (in Unix time) that the campaign update was created.</p>
     */
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the campaign update was created.</p>
     */
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the campaign update was created.</p>
     */
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the campaign update was created.</p>
     */
    inline CampaignUpdateSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the campaign update was created.</p>
     */
    inline CampaignUpdateSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}


    /**
     * <p>The date and time (in Unix time) that the campaign update was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }

    /**
     * <p>The date and time (in Unix time) that the campaign update was last
     * updated.</p>
     */
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }

    /**
     * <p>The date and time (in Unix time) that the campaign update was last
     * updated.</p>
     */
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }

    /**
     * <p>The date and time (in Unix time) that the campaign update was last
     * updated.</p>
     */
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }

    /**
     * <p>The date and time (in Unix time) that the campaign update was last
     * updated.</p>
     */
    inline CampaignUpdateSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}

    /**
     * <p>The date and time (in Unix time) that the campaign update was last
     * updated.</p>
     */
    inline CampaignUpdateSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}

  private:

    Aws::String m_solutionVersionArn;
    bool m_solutionVersionArnHasBeenSet;

    int m_minProvisionedTPS;
    bool m_minProvisionedTPSHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
