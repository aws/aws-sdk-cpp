/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/codedeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/GenericRevisionInfo.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace codedeploy
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_CODEDEPLOY_API GetApplicationRevisionResult
  {
  public:
    GetApplicationRevisionResult();
    GetApplicationRevisionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetApplicationRevisionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    
    inline GetApplicationRevisionResult&  WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    
    inline GetApplicationRevisionResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    
    inline const RevisionLocation& GetRevision() const{ return m_revision; }
    
    inline void SetRevision(const RevisionLocation& value) { m_revision = value; }

    
    inline GetApplicationRevisionResult&  WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    
    inline const GenericRevisionInfo& GetRevisionInfo() const{ return m_revisionInfo; }
    
    inline void SetRevisionInfo(const GenericRevisionInfo& value) { m_revisionInfo = value; }

    
    inline GetApplicationRevisionResult&  WithRevisionInfo(const GenericRevisionInfo& value) { SetRevisionInfo(value); return *this;}

  private:
    Aws::String m_applicationName;
    RevisionLocation m_revision;
    GenericRevisionInfo m_revisionInfo;
  };

} // namespace Model
} // namespace codedeploy
} // namespace Aws
