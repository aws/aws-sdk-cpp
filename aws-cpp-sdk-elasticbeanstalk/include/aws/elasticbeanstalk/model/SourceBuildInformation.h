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
#include <aws/elasticbeanstalk/model/SourceType.h>
#include <aws/elasticbeanstalk/model/SourceRepository.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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

  class AWS_ELASTICBEANSTALK_API SourceBuildInformation
  {
  public:
    SourceBuildInformation();
    SourceBuildInformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    SourceBuildInformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    
    inline const SourceType& GetSourceType() const{ return m_sourceType; }

    
    inline void SetSourceType(const SourceType& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    
    inline void SetSourceType(SourceType&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    
    inline SourceBuildInformation& WithSourceType(const SourceType& value) { SetSourceType(value); return *this;}

    
    inline SourceBuildInformation& WithSourceType(SourceType&& value) { SetSourceType(value); return *this;}

    
    inline const SourceRepository& GetSourceRepository() const{ return m_sourceRepository; }

    
    inline void SetSourceRepository(const SourceRepository& value) { m_sourceRepositoryHasBeenSet = true; m_sourceRepository = value; }

    
    inline void SetSourceRepository(SourceRepository&& value) { m_sourceRepositoryHasBeenSet = true; m_sourceRepository = value; }

    
    inline SourceBuildInformation& WithSourceRepository(const SourceRepository& value) { SetSourceRepository(value); return *this;}

    
    inline SourceBuildInformation& WithSourceRepository(SourceRepository&& value) { SetSourceRepository(value); return *this;}

    
    inline const Aws::String& GetSourceLocation() const{ return m_sourceLocation; }

    
    inline void SetSourceLocation(const Aws::String& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = value; }

    
    inline void SetSourceLocation(Aws::String&& value) { m_sourceLocationHasBeenSet = true; m_sourceLocation = value; }

    
    inline void SetSourceLocation(const char* value) { m_sourceLocationHasBeenSet = true; m_sourceLocation.assign(value); }

    
    inline SourceBuildInformation& WithSourceLocation(const Aws::String& value) { SetSourceLocation(value); return *this;}

    
    inline SourceBuildInformation& WithSourceLocation(Aws::String&& value) { SetSourceLocation(value); return *this;}

    
    inline SourceBuildInformation& WithSourceLocation(const char* value) { SetSourceLocation(value); return *this;}

  private:
    SourceType m_sourceType;
    bool m_sourceTypeHasBeenSet;
    SourceRepository m_sourceRepository;
    bool m_sourceRepositoryHasBeenSet;
    Aws::String m_sourceLocation;
    bool m_sourceLocationHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
