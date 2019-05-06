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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EnableLoggingMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API EnableLoggingRequest : public RedshiftRequest
  {
  public:
    EnableLoggingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableLogging"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline EnableLoggingRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline EnableLoggingRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster on which logging is to be started.</p>
     * <p>Example: <code>examplecluster</code> </p>
     */
    inline EnableLoggingRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline EnableLoggingRequest& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline EnableLoggingRequest& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing S3 bucket where the log files are to be stored.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be in the same region as the cluster</p>
     * </li> <li> <p>The cluster must have read bucket and put object permissions</p>
     * </li> </ul>
     */
    inline EnableLoggingRequest& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }

    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }

    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }

    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }

    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }

    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline EnableLoggingRequest& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}

    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline EnableLoggingRequest& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix applied to the log file names.</p> <p>Constraints:</p> <ul> <li>
     * <p>Cannot exceed 512 characters</p> </li> <li> <p>Cannot contain spaces( ),
     * double quotes ("), single quotes ('), a backslash (\), or control characters.
     * The hexadecimal codes for invalid characters are: </p> <ul> <li> <p>x00 to
     * x20</p> </li> <li> <p>x22</p> </li> <li> <p>x27</p> </li> <li> <p>x5c</p> </li>
     * <li> <p>x7f or larger</p> </li> </ul> </li> </ul>
     */
    inline EnableLoggingRequest& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
