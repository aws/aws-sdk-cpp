/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies a data store in Amazon Simple Storage Service (Amazon
   * S3).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3Target">AWS API
   * Reference</a></p>
   */
  class S3Target
  {
  public:
    AWS_GLUE_API S3Target() = default;
    AWS_GLUE_API S3Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the Amazon S3 target.</p>
     */
    inline const Aws::String& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::String>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::String>
    S3Target& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const { return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    void SetExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::forward<ExclusionsT>(value); }
    template<typename ExclusionsT = Aws::Vector<Aws::String>>
    S3Target& WithExclusions(ExclusionsT&& value) { SetExclusions(std::forward<ExclusionsT>(value)); return *this;}
    template<typename ExclusionsT = Aws::String>
    S3Target& AddExclusions(ExclusionsT&& value) { m_exclusionsHasBeenSet = true; m_exclusions.emplace_back(std::forward<ExclusionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a connection which allows a job or crawler to access data in
     * Amazon S3 within an Amazon Virtual Private Cloud environment (Amazon VPC).</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    S3Target& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of files in each leaf folder to be crawled when crawling
     * sample files in a dataset. If not set, all the files are crawled. A valid value
     * is an integer between 1 and 249.</p>
     */
    inline int GetSampleSize() const { return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(int value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline S3Target& WithSampleSize(int value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:sqs</code>.</p>
     */
    inline const Aws::String& GetEventQueueArn() const { return m_eventQueueArn; }
    inline bool EventQueueArnHasBeenSet() const { return m_eventQueueArnHasBeenSet; }
    template<typename EventQueueArnT = Aws::String>
    void SetEventQueueArn(EventQueueArnT&& value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn = std::forward<EventQueueArnT>(value); }
    template<typename EventQueueArnT = Aws::String>
    S3Target& WithEventQueueArn(EventQueueArnT&& value) { SetEventQueueArn(std::forward<EventQueueArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon dead-letter SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:deadLetterQueue</code>.</p>
     */
    inline const Aws::String& GetDlqEventQueueArn() const { return m_dlqEventQueueArn; }
    inline bool DlqEventQueueArnHasBeenSet() const { return m_dlqEventQueueArnHasBeenSet; }
    template<typename DlqEventQueueArnT = Aws::String>
    void SetDlqEventQueueArn(DlqEventQueueArnT&& value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn = std::forward<DlqEventQueueArnT>(value); }
    template<typename DlqEventQueueArnT = Aws::String>
    S3Target& WithDlqEventQueueArn(DlqEventQueueArnT&& value) { SetDlqEventQueueArn(std::forward<DlqEventQueueArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    int m_sampleSize{0};
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_eventQueueArn;
    bool m_eventQueueArnHasBeenSet = false;

    Aws::String m_dlqEventQueueArn;
    bool m_dlqEventQueueArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
