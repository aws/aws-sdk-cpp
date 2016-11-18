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
#include <aws/snowball/model/JobLogs.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

JobLogs::JobLogs() : 
    m_jobCompletionReportURIHasBeenSet(false),
    m_jobSuccessLogURIHasBeenSet(false),
    m_jobFailureLogURIHasBeenSet(false)
{
}

JobLogs::JobLogs(const JsonValue& jsonValue) : 
    m_jobCompletionReportURIHasBeenSet(false),
    m_jobSuccessLogURIHasBeenSet(false),
    m_jobFailureLogURIHasBeenSet(false)
{
  *this = jsonValue;
}

JobLogs& JobLogs::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("JobCompletionReportURI"))
  {
    m_jobCompletionReportURI = jsonValue.GetString("JobCompletionReportURI");

    m_jobCompletionReportURIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobSuccessLogURI"))
  {
    m_jobSuccessLogURI = jsonValue.GetString("JobSuccessLogURI");

    m_jobSuccessLogURIHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobFailureLogURI"))
  {
    m_jobFailureLogURI = jsonValue.GetString("JobFailureLogURI");

    m_jobFailureLogURIHasBeenSet = true;
  }

  return *this;
}

JsonValue JobLogs::Jsonize() const
{
  JsonValue payload;

  if(m_jobCompletionReportURIHasBeenSet)
  {
   payload.WithString("JobCompletionReportURI", m_jobCompletionReportURI);

  }

  if(m_jobSuccessLogURIHasBeenSet)
  {
   payload.WithString("JobSuccessLogURI", m_jobSuccessLogURI);

  }

  if(m_jobFailureLogURIHasBeenSet)
  {
   payload.WithString("JobFailureLogURI", m_jobFailureLogURI);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws