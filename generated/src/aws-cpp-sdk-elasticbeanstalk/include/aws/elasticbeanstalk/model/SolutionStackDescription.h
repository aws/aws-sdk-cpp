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
    AWS_ELASTICBEANSTALK_API SolutionStackDescription();
    AWS_ELASTICBEANSTALK_API SolutionStackDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API SolutionStackDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the solution stack.</p>
     */
    inline const Aws::String& GetSolutionStackName() const{ return m_solutionStackName; }

    /**
     * <p>The name of the solution stack.</p>
     */
    inline bool SolutionStackNameHasBeenSet() const { return m_solutionStackNameHasBeenSet; }

    /**
     * <p>The name of the solution stack.</p>
     */
    inline void SetSolutionStackName(const Aws::String& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = value; }

    /**
     * <p>The name of the solution stack.</p>
     */
    inline void SetSolutionStackName(Aws::String&& value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName = std::move(value); }

    /**
     * <p>The name of the solution stack.</p>
     */
    inline void SetSolutionStackName(const char* value) { m_solutionStackNameHasBeenSet = true; m_solutionStackName.assign(value); }

    /**
     * <p>The name of the solution stack.</p>
     */
    inline SolutionStackDescription& WithSolutionStackName(const Aws::String& value) { SetSolutionStackName(value); return *this;}

    /**
     * <p>The name of the solution stack.</p>
     */
    inline SolutionStackDescription& WithSolutionStackName(Aws::String&& value) { SetSolutionStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the solution stack.</p>
     */
    inline SolutionStackDescription& WithSolutionStackName(const char* value) { SetSolutionStackName(value); return *this;}


    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPermittedFileTypes() const{ return m_permittedFileTypes; }

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline bool PermittedFileTypesHasBeenSet() const { return m_permittedFileTypesHasBeenSet; }

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline void SetPermittedFileTypes(const Aws::Vector<Aws::String>& value) { m_permittedFileTypesHasBeenSet = true; m_permittedFileTypes = value; }

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline void SetPermittedFileTypes(Aws::Vector<Aws::String>&& value) { m_permittedFileTypesHasBeenSet = true; m_permittedFileTypes = std::move(value); }

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline SolutionStackDescription& WithPermittedFileTypes(const Aws::Vector<Aws::String>& value) { SetPermittedFileTypes(value); return *this;}

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline SolutionStackDescription& WithPermittedFileTypes(Aws::Vector<Aws::String>&& value) { SetPermittedFileTypes(std::move(value)); return *this;}

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline SolutionStackDescription& AddPermittedFileTypes(const Aws::String& value) { m_permittedFileTypesHasBeenSet = true; m_permittedFileTypes.push_back(value); return *this; }

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline SolutionStackDescription& AddPermittedFileTypes(Aws::String&& value) { m_permittedFileTypesHasBeenSet = true; m_permittedFileTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The permitted file types allowed for a solution stack.</p>
     */
    inline SolutionStackDescription& AddPermittedFileTypes(const char* value) { m_permittedFileTypesHasBeenSet = true; m_permittedFileTypes.push_back(value); return *this; }

  private:

    Aws::String m_solutionStackName;
    bool m_solutionStackNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_permittedFileTypes;
    bool m_permittedFileTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
