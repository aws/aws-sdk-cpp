/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ComputeType.h>

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

  class AWS_ELASTICBEANSTALK_API BuildConfiguration
  {
  public:
    BuildConfiguration();
    BuildConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    BuildConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const Aws::String& GetArtifactName() const{ return m_artifactName; }

    
    inline void SetArtifactName(const Aws::String& value) { m_artifactNameHasBeenSet = true; m_artifactName = value; }

    
    inline void SetArtifactName(Aws::String&& value) { m_artifactNameHasBeenSet = true; m_artifactName = value; }

    
    inline void SetArtifactName(const char* value) { m_artifactNameHasBeenSet = true; m_artifactName.assign(value); }

    
    inline BuildConfiguration& WithArtifactName(const Aws::String& value) { SetArtifactName(value); return *this;}

    
    inline BuildConfiguration& WithArtifactName(Aws::String&& value) { SetArtifactName(value); return *this;}

    
    inline BuildConfiguration& WithArtifactName(const char* value) { SetArtifactName(value); return *this;}

    
    inline const Aws::String& GetCodeBuildServiceRole() const{ return m_codeBuildServiceRole; }

    
    inline void SetCodeBuildServiceRole(const Aws::String& value) { m_codeBuildServiceRoleHasBeenSet = true; m_codeBuildServiceRole = value; }

    
    inline void SetCodeBuildServiceRole(Aws::String&& value) { m_codeBuildServiceRoleHasBeenSet = true; m_codeBuildServiceRole = value; }

    
    inline void SetCodeBuildServiceRole(const char* value) { m_codeBuildServiceRoleHasBeenSet = true; m_codeBuildServiceRole.assign(value); }

    
    inline BuildConfiguration& WithCodeBuildServiceRole(const Aws::String& value) { SetCodeBuildServiceRole(value); return *this;}

    
    inline BuildConfiguration& WithCodeBuildServiceRole(Aws::String&& value) { SetCodeBuildServiceRole(value); return *this;}

    
    inline BuildConfiguration& WithCodeBuildServiceRole(const char* value) { SetCodeBuildServiceRole(value); return *this;}

    
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    
    inline BuildConfiguration& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    
    inline BuildConfiguration& WithComputeType(ComputeType&& value) { SetComputeType(value); return *this;}

    
    inline const Aws::String& GetImage() const{ return m_image; }

    
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = value; }

    
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    
    inline BuildConfiguration& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    
    inline BuildConfiguration& WithImage(Aws::String&& value) { SetImage(value); return *this;}

    
    inline BuildConfiguration& WithImage(const char* value) { SetImage(value); return *this;}

    
    inline int GetTimeoutInMinutes() const{ return m_timeoutInMinutes; }

    
    inline void SetTimeoutInMinutes(int value) { m_timeoutInMinutesHasBeenSet = true; m_timeoutInMinutes = value; }

    
    inline BuildConfiguration& WithTimeoutInMinutes(int value) { SetTimeoutInMinutes(value); return *this;}

  private:
    Aws::String m_artifactName;
    bool m_artifactNameHasBeenSet;
    Aws::String m_codeBuildServiceRole;
    bool m_codeBuildServiceRoleHasBeenSet;
    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;
    Aws::String m_image;
    bool m_imageHasBeenSet;
    int m_timeoutInMinutes;
    bool m_timeoutInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
