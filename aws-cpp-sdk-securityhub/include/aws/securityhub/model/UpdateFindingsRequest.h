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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/securityhub/model/AwsSecurityFindingFilters.h>
#include <aws/securityhub/model/NoteUpdate.h>
#include <aws/securityhub/model/RecordState.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API UpdateFindingsRequest : public SecurityHubRequest
  {
  public:
    UpdateFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFindings"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A collection of attributes that specify which findings you want to
     * update.</p>
     */
    inline const AwsSecurityFindingFilters& GetFilters() const{ return m_filters; }

    /**
     * <p>A collection of attributes that specify which findings you want to
     * update.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A collection of attributes that specify which findings you want to
     * update.</p>
     */
    inline void SetFilters(const AwsSecurityFindingFilters& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A collection of attributes that specify which findings you want to
     * update.</p>
     */
    inline void SetFilters(AwsSecurityFindingFilters&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A collection of attributes that specify which findings you want to
     * update.</p>
     */
    inline UpdateFindingsRequest& WithFilters(const AwsSecurityFindingFilters& value) { SetFilters(value); return *this;}

    /**
     * <p>A collection of attributes that specify which findings you want to
     * update.</p>
     */
    inline UpdateFindingsRequest& WithFilters(AwsSecurityFindingFilters&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>The updated note for the finding.</p>
     */
    inline const NoteUpdate& GetNote() const{ return m_note; }

    /**
     * <p>The updated note for the finding.</p>
     */
    inline bool NoteHasBeenSet() const { return m_noteHasBeenSet; }

    /**
     * <p>The updated note for the finding.</p>
     */
    inline void SetNote(const NoteUpdate& value) { m_noteHasBeenSet = true; m_note = value; }

    /**
     * <p>The updated note for the finding.</p>
     */
    inline void SetNote(NoteUpdate&& value) { m_noteHasBeenSet = true; m_note = std::move(value); }

    /**
     * <p>The updated note for the finding.</p>
     */
    inline UpdateFindingsRequest& WithNote(const NoteUpdate& value) { SetNote(value); return *this;}

    /**
     * <p>The updated note for the finding.</p>
     */
    inline UpdateFindingsRequest& WithNote(NoteUpdate&& value) { SetNote(std::move(value)); return *this;}


    /**
     * <p>The updated record state for the finding.</p>
     */
    inline const RecordState& GetRecordState() const{ return m_recordState; }

    /**
     * <p>The updated record state for the finding.</p>
     */
    inline bool RecordStateHasBeenSet() const { return m_recordStateHasBeenSet; }

    /**
     * <p>The updated record state for the finding.</p>
     */
    inline void SetRecordState(const RecordState& value) { m_recordStateHasBeenSet = true; m_recordState = value; }

    /**
     * <p>The updated record state for the finding.</p>
     */
    inline void SetRecordState(RecordState&& value) { m_recordStateHasBeenSet = true; m_recordState = std::move(value); }

    /**
     * <p>The updated record state for the finding.</p>
     */
    inline UpdateFindingsRequest& WithRecordState(const RecordState& value) { SetRecordState(value); return *this;}

    /**
     * <p>The updated record state for the finding.</p>
     */
    inline UpdateFindingsRequest& WithRecordState(RecordState&& value) { SetRecordState(std::move(value)); return *this;}

  private:

    AwsSecurityFindingFilters m_filters;
    bool m_filtersHasBeenSet;

    NoteUpdate m_note;
    bool m_noteHasBeenSet;

    RecordState m_recordState;
    bool m_recordStateHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
