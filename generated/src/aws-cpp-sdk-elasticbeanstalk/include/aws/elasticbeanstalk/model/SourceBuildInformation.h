﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticbeanstalk/model/SourceType.h>
#include <aws/elasticbeanstalk/model/SourceRepository.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Location of the source code for an application version.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SourceBuildInformation">AWS
   * API Reference</a></p>
   */
  class SourceBuildInformation
  {
  public:
    AWS_ELASTICBEANSTALK_API SourceBuildInformation() = default;
    AWS_ELASTICBEANSTALK_API SourceBuildInformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SourceBuildInformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of repository.</p> <ul> <li> <p> <code>Git</code> </p> </li> <li>
     * <p> <code>Zip</code> </p> </li> </ul>
     */
    inline SourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(SourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline SourceBuildInformation& WithSourceType(SourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Location where the repository is stored.</p> <ul> <li> <p>
     * <code>CodeCommit</code> </p> </li> <li> <p> <code>S3</code> </p> </li> </ul>
     */
    inline SourceRepository GetSourceRepository() const { return m_sourceRepository; }
    inline bool SourceRepositoryHasBeenSet() const { return m_sourceRepositoryHasBeenSet; }
    inline void SetSourceRepository(SourceRepository value) { m_sourceRepositoryHasBeenSet = true; m_sourceRepository = value; }
    inline SourceBuildInformation& WithSourceRepository(SourceRepository value) { SetSourceRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the source code, as a formatted string, depending on the
     * value of <code>SourceRepository</code> </p> <ul> <li> <p>For
     * <code>CodeCommit</code>, the format is the repository name and commit ID,
     * separated by a forward slash. For example,
     * <code>my-git-repo/265cfa0cf6af46153527f55d6503ec030551f57a</code>.</p> </li>
     * <li> <p>For <code>S3</code>, the format is the S3 bucket name and object key,
     * separated by a forward slash. For example,
     * <code>my-s3-bucket/Folders/my-source-file</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceLocation() const { return m_sourceLocation; }
    inline bool SourceLocationHasBeenSet() const { return m_sourceLocationHasBeenSet; }
    template<typename SourceLocationT = Aws::String>
    void SetSourceLocation(SourceLocationT&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = std::forward<SourceLocationT>(value); }
    template<typename SourceLocationT = Aws::String>
    SourceBuildInformation& WithSourceLocation(SourceLocationT&& value) { SetSourceLocation(std::forward<SourceLocationT>(value)); return *this;}
    ///@}
  private:

    SourceType m_sourceType{SourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    SourceRepository m_sourceRepository{SourceRepository::NOT_SET};
    bool m_sourceRepositoryHasBeenSet = false;

    Aws::String m_sourceLocation;
    bool m_sourceLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
