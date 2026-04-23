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
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/importexport/model/JobType.h>
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
namespace ImportExport
{
namespace Model
{

  /**
   * Representation of a job returned by the ListJobs operation.<p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/Job">AWS
   * API Reference</a></p>
   */
  class AWS_IMPORTEXPORT_API Job
  {
  public:
    Job();
    Job(const Aws::Utils::Xml::XmlNode& xmlNode);
    Job& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    
    inline Job& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    
    inline Job& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    
    inline Job& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    
    inline Job& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    
    inline Job& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    
    inline bool GetIsCanceled() const{ return m_isCanceled; }

    
    inline bool IsCanceledHasBeenSet() const { return m_isCanceledHasBeenSet; }

    
    inline void SetIsCanceled(bool value) { m_isCanceledHasBeenSet = true; m_isCanceled = value; }

    
    inline Job& WithIsCanceled(bool value) { SetIsCanceled(value); return *this;}


    
    inline const JobType& GetJobType() const{ return m_jobType; }

    
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    
    inline Job& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    
    inline Job& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    bool m_isCanceled;
    bool m_isCanceledHasBeenSet;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
