/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/OriginType.h>
#include <aws/macie2/model/ClassificationResult.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about a sensitive data finding and the details of the
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ClassificationDetails">AWS
   * API Reference</a></p>
   */
  class ClassificationDetails
  {
  public:
    AWS_MACIE2_API ClassificationDetails() = default;
    AWS_MACIE2_API ClassificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ClassificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline const Aws::String& GetDetailedResultsLocation() const { return m_detailedResultsLocation; }
    inline bool DetailedResultsLocationHasBeenSet() const { return m_detailedResultsLocationHasBeenSet; }
    template<typename DetailedResultsLocationT = Aws::String>
    void SetDetailedResultsLocation(DetailedResultsLocationT&& value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation = std::forward<DetailedResultsLocationT>(value); }
    template<typename DetailedResultsLocationT = Aws::String>
    ClassificationDetails& WithDetailedResultsLocation(DetailedResultsLocationT&& value) { SetDetailedResultsLocation(std::forward<DetailedResultsLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline const Aws::String& GetJobArn() const { return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    template<typename JobArnT = Aws::String>
    void SetJobArn(JobArnT&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::forward<JobArnT>(value); }
    template<typename JobArnT = Aws::String>
    ClassificationDetails& WithJobArn(JobArnT&& value) { SetJobArn(std::forward<JobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    ClassificationDetails& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how Amazon Macie found the sensitive data that produced the
     * finding. Possible values are: SENSITIVE_DATA_DISCOVERY_JOB, for a classification
     * job; and, AUTOMATED_SENSITIVE_DATA_DISCOVERY, for automated sensitive data
     * discovery.</p>
     */
    inline OriginType GetOriginType() const { return m_originType; }
    inline bool OriginTypeHasBeenSet() const { return m_originTypeHasBeenSet; }
    inline void SetOriginType(OriginType value) { m_originTypeHasBeenSet = true; m_originType = value; }
    inline ClassificationDetails& WithOriginType(OriginType value) { SetOriginType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status and other details of the finding.</p>
     */
    inline const ClassificationResult& GetResult() const { return m_result; }
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
    template<typename ResultT = ClassificationResult>
    void SetResult(ResultT&& value) { m_resultHasBeenSet = true; m_result = std::forward<ResultT>(value); }
    template<typename ResultT = ClassificationResult>
    ClassificationDetails& WithResult(ResultT&& value) { SetResult(std::forward<ResultT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detailedResultsLocation;
    bool m_detailedResultsLocationHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    OriginType m_originType{OriginType::NOT_SET};
    bool m_originTypeHasBeenSet = false;

    ClassificationResult m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
