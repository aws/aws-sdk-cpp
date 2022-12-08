/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class GetFleetResult
  {
  public:
    AWS_IOTFLEETWISE_API GetFleetResult();
    AWS_IOTFLEETWISE_API GetFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API GetFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the fleet.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p> The ID of the fleet.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p> The ID of the fleet.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p> The ID of the fleet.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p> The ID of the fleet.</p>
     */
    inline GetFleetResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p> The ID of the fleet.</p>
     */
    inline GetFleetResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the fleet.</p>
     */
    inline GetFleetResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the fleet. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the fleet. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the fleet. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the fleet. </p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the fleet. </p>
     */
    inline GetFleetResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the fleet. </p>
     */
    inline GetFleetResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the fleet. </p>
     */
    inline GetFleetResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> A brief description of the fleet. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p> A brief description of the fleet. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p> A brief description of the fleet. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p> A brief description of the fleet. </p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p> A brief description of the fleet. </p>
     */
    inline GetFleetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p> A brief description of the fleet. </p>
     */
    inline GetFleetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p> A brief description of the fleet. </p>
     */
    inline GetFleetResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p> The ARN of a signal catalog associated with the fleet. </p>
     */
    inline const Aws::String& GetSignalCatalogArn() const{ return m_signalCatalogArn; }

    /**
     * <p> The ARN of a signal catalog associated with the fleet. </p>
     */
    inline void SetSignalCatalogArn(const Aws::String& value) { m_signalCatalogArn = value; }

    /**
     * <p> The ARN of a signal catalog associated with the fleet. </p>
     */
    inline void SetSignalCatalogArn(Aws::String&& value) { m_signalCatalogArn = std::move(value); }

    /**
     * <p> The ARN of a signal catalog associated with the fleet. </p>
     */
    inline void SetSignalCatalogArn(const char* value) { m_signalCatalogArn.assign(value); }

    /**
     * <p> The ARN of a signal catalog associated with the fleet. </p>
     */
    inline GetFleetResult& WithSignalCatalogArn(const Aws::String& value) { SetSignalCatalogArn(value); return *this;}

    /**
     * <p> The ARN of a signal catalog associated with the fleet. </p>
     */
    inline GetFleetResult& WithSignalCatalogArn(Aws::String&& value) { SetSignalCatalogArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of a signal catalog associated with the fleet. </p>
     */
    inline GetFleetResult& WithSignalCatalogArn(const char* value) { SetSignalCatalogArn(value); return *this;}


    /**
     * <p> The time the fleet was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p> The time the fleet was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p> The time the fleet was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p> The time the fleet was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline GetFleetResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p> The time the fleet was created in seconds since epoch (January 1, 1970 at
     * midnight UTC time). </p>
     */
    inline GetFleetResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p> The time the fleet was last updated, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p> The time the fleet was last updated, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p> The time the fleet was last updated, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p> The time the fleet was last updated, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline GetFleetResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p> The time the fleet was last updated, in seconds since epoch (January 1, 1970
     * at midnight UTC time). </p>
     */
    inline GetFleetResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_arn;

    Aws::String m_description;

    Aws::String m_signalCatalogArn;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
