/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeCommit
{
namespace Model
{
  /**
   * <p>Represents the output of a put repository triggers operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecommit-2015-04-13/PutRepositoryTriggersOutput">AWS
   * API Reference</a></p>
   */
  class PutRepositoryTriggersResult
  {
  public:
    AWS_CODECOMMIT_API PutRepositoryTriggersResult();
    AWS_CODECOMMIT_API PutRepositoryTriggersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODECOMMIT_API PutRepositoryTriggersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationId = value; }

    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationId = std::move(value); }

    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationId.assign(value); }

    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline PutRepositoryTriggersResult& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline PutRepositoryTriggersResult& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The system-generated unique ID for the create or update operation.</p>
     */
    inline PutRepositoryTriggersResult& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}

  private:

    Aws::String m_configurationId;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
