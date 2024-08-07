/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A failed annotation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AnnotationError">AWS
   * API Reference</a></p>
   */
  class AnnotationError
  {
  public:
    AWS_GLUE_API AnnotationError();
    AWS_GLUE_API AnnotationError(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API AnnotationError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Profile ID for the failed annotation.</p>
     */
    inline const Aws::String& GetProfileId() const{ return m_profileId; }
    inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
    inline void SetProfileId(const Aws::String& value) { m_profileIdHasBeenSet = true; m_profileId = value; }
    inline void SetProfileId(Aws::String&& value) { m_profileIdHasBeenSet = true; m_profileId = std::move(value); }
    inline void SetProfileId(const char* value) { m_profileIdHasBeenSet = true; m_profileId.assign(value); }
    inline AnnotationError& WithProfileId(const Aws::String& value) { SetProfileId(value); return *this;}
    inline AnnotationError& WithProfileId(Aws::String&& value) { SetProfileId(std::move(value)); return *this;}
    inline AnnotationError& WithProfileId(const char* value) { SetProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Statistic ID for the failed annotation.</p>
     */
    inline const Aws::String& GetStatisticId() const{ return m_statisticId; }
    inline bool StatisticIdHasBeenSet() const { return m_statisticIdHasBeenSet; }
    inline void SetStatisticId(const Aws::String& value) { m_statisticIdHasBeenSet = true; m_statisticId = value; }
    inline void SetStatisticId(Aws::String&& value) { m_statisticIdHasBeenSet = true; m_statisticId = std::move(value); }
    inline void SetStatisticId(const char* value) { m_statisticIdHasBeenSet = true; m_statisticId.assign(value); }
    inline AnnotationError& WithStatisticId(const Aws::String& value) { SetStatisticId(value); return *this;}
    inline AnnotationError& WithStatisticId(Aws::String&& value) { SetStatisticId(std::move(value)); return *this;}
    inline AnnotationError& WithStatisticId(const char* value) { SetStatisticId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why the annotation failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }
    inline AnnotationError& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline AnnotationError& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline AnnotationError& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}
  private:

    Aws::String m_profileId;
    bool m_profileIdHasBeenSet = false;

    Aws::String m_statisticId;
    bool m_statisticIdHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
