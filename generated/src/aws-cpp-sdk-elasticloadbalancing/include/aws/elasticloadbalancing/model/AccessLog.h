/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Information about the <code>AccessLog</code> attribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/AccessLog">AWS
   * API Reference</a></p>
   */
  class AccessLog
  {
  public:
    AWS_ELASTICLOADBALANCING_API AccessLog() = default;
    AWS_ELASTICLOADBALANCING_API AccessLog(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCING_API AccessLog& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Specifies whether access logs are enabled for the load balancer.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AccessLog& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket where the access logs are stored.</p>
     */
    inline const Aws::String& GetS3BucketName() const { return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    template<typename S3BucketNameT = Aws::String>
    void SetS3BucketName(S3BucketNameT&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::forward<S3BucketNameT>(value); }
    template<typename S3BucketNameT = Aws::String>
    AccessLog& WithS3BucketName(S3BucketNameT&& value) { SetS3BucketName(std::forward<S3BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The interval for publishing the access logs. You can specify an interval of
     * either 5 minutes or 60 minutes.</p> <p>Default: 60 minutes</p>
     */
    inline int GetEmitInterval() const { return m_emitInterval; }
    inline bool EmitIntervalHasBeenSet() const { return m_emitIntervalHasBeenSet; }
    inline void SetEmitInterval(int value) { m_emitIntervalHasBeenSet = true; m_emitInterval = value; }
    inline AccessLog& WithEmitInterval(int value) { SetEmitInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical hierarchy you created for your Amazon S3 bucket, for example
     * <code>my-bucket-prefix/prod</code>. If the prefix is not provided, the log is
     * placed at the root level of the bucket.</p>
     */
    inline const Aws::String& GetS3BucketPrefix() const { return m_s3BucketPrefix; }
    inline bool S3BucketPrefixHasBeenSet() const { return m_s3BucketPrefixHasBeenSet; }
    template<typename S3BucketPrefixT = Aws::String>
    void SetS3BucketPrefix(S3BucketPrefixT&& value) { m_s3BucketPrefixHasBeenSet = true; m_s3BucketPrefix = std::forward<S3BucketPrefixT>(value); }
    template<typename S3BucketPrefixT = Aws::String>
    AccessLog& WithS3BucketPrefix(S3BucketPrefixT&& value) { SetS3BucketPrefix(std::forward<S3BucketPrefixT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    int m_emitInterval{0};
    bool m_emitIntervalHasBeenSet = false;

    Aws::String m_s3BucketPrefix;
    bool m_s3BucketPrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
