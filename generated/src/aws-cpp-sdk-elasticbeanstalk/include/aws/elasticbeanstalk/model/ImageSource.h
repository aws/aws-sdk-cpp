/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElasticBeanstalk {
namespace Model {

/**
 * <p>The location of a container image.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ImageSource">AWS
 * API Reference</a></p>
 */
class ImageSource {
 public:
  AWS_ELASTICBEANSTALK_API ImageSource() = default;
  AWS_ELASTICBEANSTALK_API ImageSource(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICBEANSTALK_API ImageSource& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                               const char* locationValue) const;
  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The URI of the container image, including the registry, the repository, and
   * the image tag or digest. For example,
   * <code>111122223333.dkr.ecr.us-east-1.amazonaws.com/my-repository:latest</code>.</p>
   */
  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  ImageSource& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uri;
  bool m_uriHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
