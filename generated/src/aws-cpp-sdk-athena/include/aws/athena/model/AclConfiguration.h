/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/S3AclOption.h>
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
namespace Athena
{
namespace Model
{

  /**
   * <p>Indicates that an Amazon S3 canned ACL should be set to control ownership of
   * stored query results. When Athena stores query results in Amazon S3, the canned
   * ACL is set with the <code>x-amz-acl</code> request header. For more information
   * about S3 Object Ownership, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/about-object-ownership.html#object-ownership-overview">Object
   * Ownership settings</a> in the <i>Amazon S3 User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/AclConfiguration">AWS
   * API Reference</a></p>
   */
  class AclConfiguration
  {
  public:
    AWS_ATHENA_API AclConfiguration();
    AWS_ATHENA_API AclConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API AclConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 canned ACL that Athena should specify when storing query
     * results. Currently the only supported canned ACL is
     * <code>BUCKET_OWNER_FULL_CONTROL</code>. If a query runs in a workgroup and the
     * workgroup overrides client-side settings, then the Amazon S3 canned ACL
     * specified in the workgroup's settings is used for all queries that run in the
     * workgroup. For more information about Amazon S3 canned ACLs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const S3AclOption& GetS3AclOption() const{ return m_s3AclOption; }

    /**
     * <p>The Amazon S3 canned ACL that Athena should specify when storing query
     * results. Currently the only supported canned ACL is
     * <code>BUCKET_OWNER_FULL_CONTROL</code>. If a query runs in a workgroup and the
     * workgroup overrides client-side settings, then the Amazon S3 canned ACL
     * specified in the workgroup's settings is used for all queries that run in the
     * workgroup. For more information about Amazon S3 canned ACLs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline bool S3AclOptionHasBeenSet() const { return m_s3AclOptionHasBeenSet; }

    /**
     * <p>The Amazon S3 canned ACL that Athena should specify when storing query
     * results. Currently the only supported canned ACL is
     * <code>BUCKET_OWNER_FULL_CONTROL</code>. If a query runs in a workgroup and the
     * workgroup overrides client-side settings, then the Amazon S3 canned ACL
     * specified in the workgroup's settings is used for all queries that run in the
     * workgroup. For more information about Amazon S3 canned ACLs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetS3AclOption(const S3AclOption& value) { m_s3AclOptionHasBeenSet = true; m_s3AclOption = value; }

    /**
     * <p>The Amazon S3 canned ACL that Athena should specify when storing query
     * results. Currently the only supported canned ACL is
     * <code>BUCKET_OWNER_FULL_CONTROL</code>. If a query runs in a workgroup and the
     * workgroup overrides client-side settings, then the Amazon S3 canned ACL
     * specified in the workgroup's settings is used for all queries that run in the
     * workgroup. For more information about Amazon S3 canned ACLs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline void SetS3AclOption(S3AclOption&& value) { m_s3AclOptionHasBeenSet = true; m_s3AclOption = std::move(value); }

    /**
     * <p>The Amazon S3 canned ACL that Athena should specify when storing query
     * results. Currently the only supported canned ACL is
     * <code>BUCKET_OWNER_FULL_CONTROL</code>. If a query runs in a workgroup and the
     * workgroup overrides client-side settings, then the Amazon S3 canned ACL
     * specified in the workgroup's settings is used for all queries that run in the
     * workgroup. For more information about Amazon S3 canned ACLs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline AclConfiguration& WithS3AclOption(const S3AclOption& value) { SetS3AclOption(value); return *this;}

    /**
     * <p>The Amazon S3 canned ACL that Athena should specify when storing query
     * results. Currently the only supported canned ACL is
     * <code>BUCKET_OWNER_FULL_CONTROL</code>. If a query runs in a workgroup and the
     * workgroup overrides client-side settings, then the Amazon S3 canned ACL
     * specified in the workgroup's settings is used for all queries that run in the
     * workgroup. For more information about Amazon S3 canned ACLs, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/acl-overview.html#canned-acl">Canned
     * ACL</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline AclConfiguration& WithS3AclOption(S3AclOption&& value) { SetS3AclOption(std::move(value)); return *this;}

  private:

    S3AclOption m_s3AclOption;
    bool m_s3AclOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
