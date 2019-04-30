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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>If this job failed, this element indicates why the job failed.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobFailure">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API JobFailure
  {
  public:
    JobFailure();
    JobFailure(const Aws::Utils::Xml::XmlNode& xmlNode);
    JobFailure& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline const Aws::String& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline void SetFailureCode(const Aws::String& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline void SetFailureCode(Aws::String&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline void SetFailureCode(const char* value) { m_failureCodeHasBeenSet = true; m_failureCode.assign(value); }

    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline JobFailure& WithFailureCode(const Aws::String& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline JobFailure& WithFailureCode(Aws::String&& value) { SetFailureCode(std::move(value)); return *this;}

    /**
     * <p>The failure code, if any, for the specified job.</p>
     */
    inline JobFailure& WithFailureCode(const char* value) { SetFailureCode(value); return *this;}


    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline JobFailure& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline JobFailure& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason, if any, for the specified job.</p>
     */
    inline JobFailure& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_failureCode;
    bool m_failureCodeHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
