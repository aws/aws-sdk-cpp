/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/ExperienceStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ExperienceEndpoint.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace kendra
{
namespace Model
{

  /**
   * <p>Summary information for your Amazon Kendra experience. You can create an
   * Amazon Kendra experience such as a search application. For more information on
   * creating a search application experience, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/deploying-search-experience-no-code.html">Building
   * a search experience with no code</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/ExperiencesSummary">AWS
   * API Reference</a></p>
   */
  class ExperiencesSummary
  {
  public:
    AWS_KENDRA_API ExperiencesSummary();
    AWS_KENDRA_API ExperiencesSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API ExperiencesSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date-time your Amazon Kendra experience was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date-time your Amazon Kendra experience was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date-time your Amazon Kendra experience was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date-time your Amazon Kendra experience was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date-time your Amazon Kendra experience was created.</p>
     */
    inline ExperiencesSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date-time your Amazon Kendra experience was created.</p>
     */
    inline ExperiencesSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The processing status of your Amazon Kendra experience.</p>
     */
    inline const ExperienceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The processing status of your Amazon Kendra experience.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The processing status of your Amazon Kendra experience.</p>
     */
    inline void SetStatus(const ExperienceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The processing status of your Amazon Kendra experience.</p>
     */
    inline void SetStatus(ExperienceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The processing status of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithStatus(const ExperienceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The processing status of your Amazon Kendra experience.</p>
     */
    inline ExperiencesSummary& WithStatus(ExperienceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline const Aws::Vector<ExperienceEndpoint>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline void SetEndpoints(const Aws::Vector<ExperienceEndpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline void SetEndpoints(Aws::Vector<ExperienceEndpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline ExperiencesSummary& WithEndpoints(const Aws::Vector<ExperienceEndpoint>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline ExperiencesSummary& WithEndpoints(Aws::Vector<ExperienceEndpoint>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline ExperiencesSummary& AddEndpoints(const ExperienceEndpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }

    /**
     * <p>The endpoint URLs for your Amazon Kendra experiences. The URLs are unique and
     * fully hosted by Amazon Web Services.</p>
     */
    inline ExperiencesSummary& AddEndpoints(ExperienceEndpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    ExperienceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<ExperienceEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
