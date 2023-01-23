/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/RecordingConfiguration.h>
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
namespace IVS
{
namespace Model
{
  class GetRecordingConfigurationResult
  {
  public:
    AWS_IVS_API GetRecordingConfigurationResult();
    AWS_IVS_API GetRecordingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API GetRecordingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline const RecordingConfiguration& GetRecordingConfiguration() const{ return m_recordingConfiguration; }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline void SetRecordingConfiguration(const RecordingConfiguration& value) { m_recordingConfiguration = value; }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline void SetRecordingConfiguration(RecordingConfiguration&& value) { m_recordingConfiguration = std::move(value); }

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline GetRecordingConfigurationResult& WithRecordingConfiguration(const RecordingConfiguration& value) { SetRecordingConfiguration(value); return *this;}

    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline GetRecordingConfigurationResult& WithRecordingConfiguration(RecordingConfiguration&& value) { SetRecordingConfiguration(std::move(value)); return *this;}

  private:

    RecordingConfiguration m_recordingConfiguration;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
