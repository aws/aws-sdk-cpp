/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/AmiArchitecture.h>

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
 * <p>An AMI that Elastic Beanstalk uses by default for a platform version and
 * processor architecture.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/DefaultAmi">AWS
 * API Reference</a></p>
 */
class DefaultAmi {
 public:
  AWS_ELASTICBEANSTALK_API DefaultAmi() = default;
  AWS_ELASTICBEANSTALK_API DefaultAmi(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICBEANSTALK_API DefaultAmi& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                               const char* locationValue) const;
  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The processor architecture of the AMI.</p>
   */
  inline AmiArchitecture GetArchitecture() const { return m_architecture; }
  inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }
  inline void SetArchitecture(AmiArchitecture value) {
    m_architectureHasBeenSet = true;
    m_architecture = value;
  }
  inline DefaultAmi& WithArchitecture(AmiArchitecture value) {
    SetArchitecture(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the AMI.</p>
   */
  inline const Aws::String& GetImageId() const { return m_imageId; }
  inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
  template <typename ImageIdT = Aws::String>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = Aws::String>
  DefaultAmi& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}
 private:
  AmiArchitecture m_architecture{AmiArchitecture::NOT_SET};

  Aws::String m_imageId;
  bool m_architectureHasBeenSet = false;
  bool m_imageIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
