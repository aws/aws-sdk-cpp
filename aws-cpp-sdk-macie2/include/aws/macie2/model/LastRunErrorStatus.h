/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/LastRunErrorStatusCode.h>
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
   * <p>Specifies whether any account- or bucket-level access errors occurred when a
   * classification job ran. For example, the job is configured to analyze data for a
   * member account that was suspended, or the job is configured to analyze an S3
   * bucket that Amazon Macie isn't allowed to access.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/LastRunErrorStatus">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API LastRunErrorStatus
  {
  public:
    LastRunErrorStatus();
    LastRunErrorStatus(Aws::Utils::Json::JsonView jsonValue);
    LastRunErrorStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run. Possible values are:</p> <ul><li><p>ERROR - One or more
     * errors occurred. Amazon Macie didn't process all the data specified for the
     * job.</p></li> <li><p>NONE - No errors occurred. Macie processed all the data
     * specified for the job.</p></li></ul>
     */
    inline const LastRunErrorStatusCode& GetCode() const{ return m_code; }

    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run. Possible values are:</p> <ul><li><p>ERROR - One or more
     * errors occurred. Amazon Macie didn't process all the data specified for the
     * job.</p></li> <li><p>NONE - No errors occurred. Macie processed all the data
     * specified for the job.</p></li></ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run. Possible values are:</p> <ul><li><p>ERROR - One or more
     * errors occurred. Amazon Macie didn't process all the data specified for the
     * job.</p></li> <li><p>NONE - No errors occurred. Macie processed all the data
     * specified for the job.</p></li></ul>
     */
    inline void SetCode(const LastRunErrorStatusCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run. Possible values are:</p> <ul><li><p>ERROR - One or more
     * errors occurred. Amazon Macie didn't process all the data specified for the
     * job.</p></li> <li><p>NONE - No errors occurred. Macie processed all the data
     * specified for the job.</p></li></ul>
     */
    inline void SetCode(LastRunErrorStatusCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run. Possible values are:</p> <ul><li><p>ERROR - One or more
     * errors occurred. Amazon Macie didn't process all the data specified for the
     * job.</p></li> <li><p>NONE - No errors occurred. Macie processed all the data
     * specified for the job.</p></li></ul>
     */
    inline LastRunErrorStatus& WithCode(const LastRunErrorStatusCode& value) { SetCode(value); return *this;}

    /**
     * <p>Specifies whether any account- or bucket-level access errors occurred when
     * the job ran. For a recurring job, this value indicates the error status of the
     * job's most recent run. Possible values are:</p> <ul><li><p>ERROR - One or more
     * errors occurred. Amazon Macie didn't process all the data specified for the
     * job.</p></li> <li><p>NONE - No errors occurred. Macie processed all the data
     * specified for the job.</p></li></ul>
     */
    inline LastRunErrorStatus& WithCode(LastRunErrorStatusCode&& value) { SetCode(std::move(value)); return *this;}

  private:

    LastRunErrorStatusCode m_code;
    bool m_codeHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
