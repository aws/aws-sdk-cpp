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
    AWS_MACIE2_API ClassificationDetails();
    AWS_MACIE2_API ClassificationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ClassificationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline const Aws::String& GetDetailedResultsLocation() const{ return m_detailedResultsLocation; }

    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline bool DetailedResultsLocationHasBeenSet() const { return m_detailedResultsLocationHasBeenSet; }

    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline void SetDetailedResultsLocation(const Aws::String& value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation = value; }

    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline void SetDetailedResultsLocation(Aws::String&& value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation = std::move(value); }

    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline void SetDetailedResultsLocation(const char* value) { m_detailedResultsLocationHasBeenSet = true; m_detailedResultsLocation.assign(value); }

    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline ClassificationDetails& WithDetailedResultsLocation(const Aws::String& value) { SetDetailedResultsLocation(value); return *this;}

    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline ClassificationDetails& WithDetailedResultsLocation(Aws::String&& value) { SetDetailedResultsLocation(std::move(value)); return *this;}

    /**
     * <p>The path to the folder or file in Amazon S3 that contains the corresponding
     * sensitive data discovery result for the finding. If a finding applies to a large
     * archive or compressed file, this value is the path to a folder. Otherwise, this
     * value is the path to a file.</p>
     */
    inline ClassificationDetails& WithDetailedResultsLocation(const char* value) { SetDetailedResultsLocation(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline ClassificationDetails& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline ClassificationDetails& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the classification job that produced the
     * finding. This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline ClassificationDetails& WithJobArn(const char* value) { SetJobArn(value); return *this;}


    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline ClassificationDetails& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline ClassificationDetails& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the classification job that produced the finding.
     * This value is null if the origin of the finding (originType) is
     * AUTOMATED_SENSITIVE_DATA_DISCOVERY.</p>
     */
    inline ClassificationDetails& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>Specifies how Amazon Macie found the sensitive data that produced the
     * finding. Possible values are: SENSITIVE_DATA_DISCOVERY_JOB, for a classification
     * job; and, AUTOMATED_SENSITIVE_DATA_DISCOVERY, for automated sensitive data
     * discovery.</p>
     */
    inline const OriginType& GetOriginType() const{ return m_originType; }

    /**
     * <p>Specifies how Amazon Macie found the sensitive data that produced the
     * finding. Possible values are: SENSITIVE_DATA_DISCOVERY_JOB, for a classification
     * job; and, AUTOMATED_SENSITIVE_DATA_DISCOVERY, for automated sensitive data
     * discovery.</p>
     */
    inline bool OriginTypeHasBeenSet() const { return m_originTypeHasBeenSet; }

    /**
     * <p>Specifies how Amazon Macie found the sensitive data that produced the
     * finding. Possible values are: SENSITIVE_DATA_DISCOVERY_JOB, for a classification
     * job; and, AUTOMATED_SENSITIVE_DATA_DISCOVERY, for automated sensitive data
     * discovery.</p>
     */
    inline void SetOriginType(const OriginType& value) { m_originTypeHasBeenSet = true; m_originType = value; }

    /**
     * <p>Specifies how Amazon Macie found the sensitive data that produced the
     * finding. Possible values are: SENSITIVE_DATA_DISCOVERY_JOB, for a classification
     * job; and, AUTOMATED_SENSITIVE_DATA_DISCOVERY, for automated sensitive data
     * discovery.</p>
     */
    inline void SetOriginType(OriginType&& value) { m_originTypeHasBeenSet = true; m_originType = std::move(value); }

    /**
     * <p>Specifies how Amazon Macie found the sensitive data that produced the
     * finding. Possible values are: SENSITIVE_DATA_DISCOVERY_JOB, for a classification
     * job; and, AUTOMATED_SENSITIVE_DATA_DISCOVERY, for automated sensitive data
     * discovery.</p>
     */
    inline ClassificationDetails& WithOriginType(const OriginType& value) { SetOriginType(value); return *this;}

    /**
     * <p>Specifies how Amazon Macie found the sensitive data that produced the
     * finding. Possible values are: SENSITIVE_DATA_DISCOVERY_JOB, for a classification
     * job; and, AUTOMATED_SENSITIVE_DATA_DISCOVERY, for automated sensitive data
     * discovery.</p>
     */
    inline ClassificationDetails& WithOriginType(OriginType&& value) { SetOriginType(std::move(value)); return *this;}


    /**
     * <p>The status and other details of the finding.</p>
     */
    inline const ClassificationResult& GetResult() const{ return m_result; }

    /**
     * <p>The status and other details of the finding.</p>
     */
    inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }

    /**
     * <p>The status and other details of the finding.</p>
     */
    inline void SetResult(const ClassificationResult& value) { m_resultHasBeenSet = true; m_result = value; }

    /**
     * <p>The status and other details of the finding.</p>
     */
    inline void SetResult(ClassificationResult&& value) { m_resultHasBeenSet = true; m_result = std::move(value); }

    /**
     * <p>The status and other details of the finding.</p>
     */
    inline ClassificationDetails& WithResult(const ClassificationResult& value) { SetResult(value); return *this;}

    /**
     * <p>The status and other details of the finding.</p>
     */
    inline ClassificationDetails& WithResult(ClassificationResult&& value) { SetResult(std::move(value)); return *this;}

  private:

    Aws::String m_detailedResultsLocation;
    bool m_detailedResultsLocationHasBeenSet = false;

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    OriginType m_originType;
    bool m_originTypeHasBeenSet = false;

    ClassificationResult m_result;
    bool m_resultHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
