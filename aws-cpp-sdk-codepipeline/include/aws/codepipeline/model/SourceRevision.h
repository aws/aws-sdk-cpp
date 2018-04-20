/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  class AWS_CODEPIPELINE_API SourceRevision
  {
  public:
    SourceRevision();
    SourceRevision(const Aws::Utils::Json::JsonValue& jsonValue);
    SourceRevision& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetActionName() const{ return m_actionName; }

    
    inline void SetActionName(const Aws::String& value) { m_actionNameHasBeenSet = true; m_actionName = value; }

    
    inline void SetActionName(Aws::String&& value) { m_actionNameHasBeenSet = true; m_actionName = std::move(value); }

    
    inline void SetActionName(const char* value) { m_actionNameHasBeenSet = true; m_actionName.assign(value); }

    
    inline SourceRevision& WithActionName(const Aws::String& value) { SetActionName(value); return *this;}

    
    inline SourceRevision& WithActionName(Aws::String&& value) { SetActionName(std::move(value)); return *this;}

    
    inline SourceRevision& WithActionName(const char* value) { SetActionName(value); return *this;}


    
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    
    inline SourceRevision& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    
    inline SourceRevision& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    
    inline SourceRevision& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    
    inline const Aws::String& GetRevisionSummary() const{ return m_revisionSummary; }

    
    inline void SetRevisionSummary(const Aws::String& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = value; }

    
    inline void SetRevisionSummary(Aws::String&& value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary = std::move(value); }

    
    inline void SetRevisionSummary(const char* value) { m_revisionSummaryHasBeenSet = true; m_revisionSummary.assign(value); }

    
    inline SourceRevision& WithRevisionSummary(const Aws::String& value) { SetRevisionSummary(value); return *this;}

    
    inline SourceRevision& WithRevisionSummary(Aws::String&& value) { SetRevisionSummary(std::move(value)); return *this;}

    
    inline SourceRevision& WithRevisionSummary(const char* value) { SetRevisionSummary(value); return *this;}


    
    inline const Aws::String& GetRevisionUrl() const{ return m_revisionUrl; }

    
    inline void SetRevisionUrl(const Aws::String& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = value; }

    
    inline void SetRevisionUrl(Aws::String&& value) { m_revisionUrlHasBeenSet = true; m_revisionUrl = std::move(value); }

    
    inline void SetRevisionUrl(const char* value) { m_revisionUrlHasBeenSet = true; m_revisionUrl.assign(value); }

    
    inline SourceRevision& WithRevisionUrl(const Aws::String& value) { SetRevisionUrl(value); return *this;}

    
    inline SourceRevision& WithRevisionUrl(Aws::String&& value) { SetRevisionUrl(std::move(value)); return *this;}

    
    inline SourceRevision& WithRevisionUrl(const char* value) { SetRevisionUrl(value); return *this;}

  private:

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet;

    Aws::String m_revisionSummary;
    bool m_revisionSummaryHasBeenSet;

    Aws::String m_revisionUrl;
    bool m_revisionUrlHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
