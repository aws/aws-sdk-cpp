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
    AWS_GLUE_API S3Target();
    AWS_GLUE_API S3Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the Amazon S3 target.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }
    inline S3Target& WithPath(const Aws::String& value) { SetPath(value); return *this;}
    inline S3Target& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}
    inline S3Target& WithPath(const char* value) { SetPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of glob patterns used to exclude from the crawl. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/glue/latest/dg/add-crawler.html">Catalog
     * Tables with a Crawler</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExclusions() const{ return m_exclusions; }
    inline bool ExclusionsHasBeenSet() const { return m_exclusionsHasBeenSet; }
    inline void SetExclusions(const Aws::Vector<Aws::String>& value) { m_exclusionsHasBeenSet = true; m_exclusions = value; }
    inline void SetExclusions(Aws::Vector<Aws::String>&& value) { m_exclusionsHasBeenSet = true; m_exclusions = std::move(value); }
    inline S3Target& WithExclusions(const Aws::Vector<Aws::String>& value) { SetExclusions(value); return *this;}
    inline S3Target& WithExclusions(Aws::Vector<Aws::String>&& value) { SetExclusions(std::move(value)); return *this;}
    inline S3Target& AddExclusions(const Aws::String& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }
    inline S3Target& AddExclusions(Aws::String&& value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(std::move(value)); return *this; }
    inline S3Target& AddExclusions(const char* value) { m_exclusionsHasBeenSet = true; m_exclusions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a connection which allows a job or crawler to access data in
     * Amazon S3 within an Amazon Virtual Private Cloud environment (Amazon VPC).</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline S3Target& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline S3Target& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline S3Target& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets the number of files in each leaf folder to be crawled when crawling
     * sample files in a dataset. If not set, all the files are crawled. A valid value
     * is an integer between 1 and 249.</p>
     */
    inline int GetSampleSize() const{ return m_sampleSize; }
    inline bool SampleSizeHasBeenSet() const { return m_sampleSizeHasBeenSet; }
    inline void SetSampleSize(int value) { m_sampleSizeHasBeenSet = true; m_sampleSize = value; }
    inline S3Target& WithSampleSize(int value) { SetSampleSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:sqs</code>.</p>
     */
    inline const Aws::String& GetEventQueueArn() const{ return m_eventQueueArn; }
    inline bool EventQueueArnHasBeenSet() const { return m_eventQueueArnHasBeenSet; }
    inline void SetEventQueueArn(const Aws::String& value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn = value; }
    inline void SetEventQueueArn(Aws::String&& value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn = std::move(value); }
    inline void SetEventQueueArn(const char* value) { m_eventQueueArnHasBeenSet = true; m_eventQueueArn.assign(value); }
    inline S3Target& WithEventQueueArn(const Aws::String& value) { SetEventQueueArn(value); return *this;}
    inline S3Target& WithEventQueueArn(Aws::String&& value) { SetEventQueueArn(std::move(value)); return *this;}
    inline S3Target& WithEventQueueArn(const char* value) { SetEventQueueArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid Amazon dead-letter SQS ARN. For example,
     * <code>arn:aws:sqs:region:account:deadLetterQueue</code>.</p>
     */
    inline const Aws::String& GetDlqEventQueueArn() const{ return m_dlqEventQueueArn; }
    inline bool DlqEventQueueArnHasBeenSet() const { return m_dlqEventQueueArnHasBeenSet; }
    inline void SetDlqEventQueueArn(const Aws::String& value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn = value; }
    inline void SetDlqEventQueueArn(Aws::String&& value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn = std::move(value); }
    inline void SetDlqEventQueueArn(const char* value) { m_dlqEventQueueArnHasBeenSet = true; m_dlqEventQueueArn.assign(value); }
    inline S3Target& WithDlqEventQueueArn(const Aws::String& value) { SetDlqEventQueueArn(value); return *this;}
    inline S3Target& WithDlqEventQueueArn(Aws::String&& value) { SetDlqEventQueueArn(std::move(value)); return *this;}
    inline S3Target& WithDlqEventQueueArn(const char* value) { SetDlqEventQueueArn(value); return *this;}
    ///@}
  private:

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    Aws::Vector<Aws::String> m_exclusions;
    bool m_exclusionsHasBeenSet = false;

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    int m_sampleSize;
    bool m_sampleSizeHasBeenSet = false;

    Aws::String m_eventQueueArn;
    bool m_eventQueueArnHasBeenSet = false;

    Aws::String m_dlqEventQueueArn;
    bool m_dlqEventQueueArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
