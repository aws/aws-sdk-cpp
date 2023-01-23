/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Framework.h>
#include <utility>

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
namespace Backup
{
namespace Model
{
  class ListFrameworksResult
  {
  public:
    AWS_BACKUP_API ListFrameworksResult();
    AWS_BACKUP_API ListFrameworksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API ListFrameworksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline const Aws::Vector<Framework>& GetFrameworks() const{ return m_frameworks; }

    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline void SetFrameworks(const Aws::Vector<Framework>& value) { m_frameworks = value; }

    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline void SetFrameworks(Aws::Vector<Framework>&& value) { m_frameworks = std::move(value); }

    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline ListFrameworksResult& WithFrameworks(const Aws::Vector<Framework>& value) { SetFrameworks(value); return *this;}

    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline ListFrameworksResult& WithFrameworks(Aws::Vector<Framework>&& value) { SetFrameworks(std::move(value)); return *this;}

    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline ListFrameworksResult& AddFrameworks(const Framework& value) { m_frameworks.push_back(value); return *this; }

    /**
     * <p>A list of frameworks with details for each framework, including the framework
     * name, Amazon Resource Name (ARN), description, number of controls, creation
     * time, and deployment status.</p>
     */
    inline ListFrameworksResult& AddFrameworks(Framework&& value) { m_frameworks.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListFrameworksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListFrameworksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListFrameworksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Framework> m_frameworks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
