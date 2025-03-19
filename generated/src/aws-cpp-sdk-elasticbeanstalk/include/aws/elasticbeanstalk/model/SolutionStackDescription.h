/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Describes the solution stack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/SolutionStackDescription">AWS
   * API Reference</a></p>
   */
  class SolutionStackDescription
  {
  public:
    AWS_ELASTICBEANSTALK_API SolutionStackDescription() = default;
    AWS_ELASTICBEANSTALK_API SolutionStackDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SolutionStackDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the solution stack.</p>
     */
    inline const Aws::String& GetSolutionStackName() const { return m_solutionStackName; }
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }
    template<typename SolutionStackNameT = Aws::String>
    void SetSolutionStackName(SolutionStackNameT&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::forward<SolutionStackNameT>(value); }
    template<typename SolutionStackNameT = Aws::String>
    SolutionStackDescription& WithSolutionStackName(SolutionStackNameT&& value) { SetSolutionStackName(std::forward<SolutionStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermittedFileTypes() const { return m_permittedFileTypes; }
    inline bool PermittedFileTypesHasBeenSet() const { return m_permittedFileTypesHasBeenSet; }
    template<typename PermittedFileTypesT = Aws::Vector<Aws::String>>
    void SetPermittedFileTypes(PermittedFileTypesT&& value) { m_permittedFileTypesHasBeenSet = true; m_permittedFileTypes = std::forward<PermittedFileTypesT>(value); }
    template<typename PermittedFileTypesT = Aws::Vector<Aws::String>>
    SolutionStackDescription& WithPermittedFileTypes(PermittedFileTypesT&& value) { SetPermittedFileTypes(std::forward<PermittedFileTypesT>(value)); return *this;}
    template<typename PermittedFileTypesT = Aws::String>
    SolutionStackDescription& AddPermittedFileTypes(PermittedFileTypesT&& value) { m_permittedFileTypesHasBeenSet = true; m_permittedFileTypes.emplace_back(std::forward<PermittedFileTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_permittedFileTypes;
    bool m_permittedFileTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
