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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/GenericRevisionInfo.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an application revision.</p>
   */
  class AWS_CODEDEPLOY_API RevisionInfo
  {
  public:
    RevisionInfo();
    RevisionInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    RevisionInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const RevisionLocation& GetRevisionLocation() const{ return m_revisionLocation; }

    
    inline void SetRevisionLocation(const RevisionLocation& value) { m_revisionLocationHasBeenSet = true; m_revisionLocation = value; }

    
    inline void SetRevisionLocation(RevisionLocation&& value) { m_revisionLocationHasBeenSet = true; m_revisionLocation = value; }

    
    inline RevisionInfo& WithRevisionLocation(const RevisionLocation& value) { SetRevisionLocation(value); return *this;}

    
    inline RevisionInfo& WithRevisionLocation(RevisionLocation&& value) { SetRevisionLocation(value); return *this;}

    
    inline const GenericRevisionInfo& GetGenericRevisionInfo() const{ return m_genericRevisionInfo; }

    
    inline void SetGenericRevisionInfo(const GenericRevisionInfo& value) { m_genericRevisionInfoHasBeenSet = true; m_genericRevisionInfo = value; }

    
    inline void SetGenericRevisionInfo(GenericRevisionInfo&& value) { m_genericRevisionInfoHasBeenSet = true; m_genericRevisionInfo = value; }

    
    inline RevisionInfo& WithGenericRevisionInfo(const GenericRevisionInfo& value) { SetGenericRevisionInfo(value); return *this;}

    
    inline RevisionInfo& WithGenericRevisionInfo(GenericRevisionInfo&& value) { SetGenericRevisionInfo(value); return *this;}

  private:
    RevisionLocation m_revisionLocation;
    bool m_revisionLocationHasBeenSet;
    GenericRevisionInfo m_genericRevisionInfo;
    bool m_genericRevisionInfoHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
