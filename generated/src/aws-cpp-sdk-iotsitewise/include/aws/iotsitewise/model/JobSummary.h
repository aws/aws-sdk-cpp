/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/JobStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains the job summary information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/JobSummary">AWS
   * API Reference</a></p>
   */
  class JobSummary
  {
  public:
    AWS_IOTSITEWISE_API JobSummary() = default;
    AWS_IOTSITEWISE_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    JobSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name that helps identify the job request.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JobSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the bulk import job can be one of following values:</p> <ul>
     * <li> <p> <code>PENDING</code> – IoT SiteWise is waiting for the current bulk
     * import job to finish.</p> </li> <li> <p> <code>CANCELLED</code> – The bulk
     * import job has been canceled.</p> </li> <li> <p> <code>RUNNING</code> – IoT
     * SiteWise is processing your request to import your data from Amazon S3.</p>
     * </li> <li> <p> <code>COMPLETED</code> – IoT SiteWise successfully completed your
     * request to import data from Amazon S3.</p> </li> <li> <p> <code>FAILED</code> –
     * IoT SiteWise couldn't process your request to import data from Amazon S3. You
     * can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> <li> <p> <code>COMPLETED_WITH_FAILURES</code> –
     * IoT SiteWise completed your request to import data from Amazon S3 with errors.
     * You can use logs saved in the specified error report location in Amazon S3 to
     * troubleshoot issues.</p> </li> </ul>
     */
    inline JobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(JobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline JobSummary& WithStatus(JobStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    JobStatus m_status{JobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
