/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/elasticbeanstalk/model/ImageBuildConfiguration.h>
#include <aws/elasticbeanstalk/model/ImageSource.h>

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
 * <p>The source of the container image for an application version: an image that
 * you built and pushed to a container registry yourself, or settings for Elastic
 * Beanstalk to build one from your source bundle.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/ImageConfiguration">AWS
 * API Reference</a></p>
 */
class ImageConfiguration {
 public:
  AWS_ELASTICBEANSTALK_API ImageConfiguration() = default;
  AWS_ELASTICBEANSTALK_API ImageConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICBEANSTALK_API ImageConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                               const char* locationValue) const;
  AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The location of a container image that you built and pushed to a container
   * registry yourself. Elastic Beanstalk deploys the image without a build step.</p>
   * <p>If you specify <code>Source</code>, don't specify <code>Build</code> or the
   * request's <code>SourceBundle</code> parameter.</p>
   */
  inline const ImageSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = ImageSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = ImageSource>
  ImageConfiguration& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Settings that Elastic Beanstalk uses to build a container image from the
   * source bundle of the application version.</p> <p>If you specify
   * <code>Build</code>, also specify the request's <code>SourceBundle</code>
   * parameter, and don't specify <code>Source</code>.</p>
   */
  inline const ImageBuildConfiguration& GetBuild() const { return m_build; }
  inline bool BuildHasBeenSet() const { return m_buildHasBeenSet; }
  template <typename BuildT = ImageBuildConfiguration>
  void SetBuild(BuildT&& value) {
    m_buildHasBeenSet = true;
    m_build = std::forward<BuildT>(value);
  }
  template <typename BuildT = ImageBuildConfiguration>
  ImageConfiguration& WithBuild(BuildT&& value) {
    SetBuild(std::forward<BuildT>(value));
    return *this;
  }
  ///@}
 private:
  ImageSource m_source;

  ImageBuildConfiguration m_build;
  bool m_sourceHasBeenSet = false;
  bool m_buildHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
