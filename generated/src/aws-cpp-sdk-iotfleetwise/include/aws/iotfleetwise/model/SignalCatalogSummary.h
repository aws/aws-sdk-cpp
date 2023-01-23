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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about a collection of standardized signals, which can be
   * attributes, branches, sensors, or actuators.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/SignalCatalogSummary">AWS
   * API Reference</a></p>
   */
  class SignalCatalogSummary
  {
  public:
    AWS_IOTFLEETWISE_API SignalCatalogSummary();
    AWS_IOTFLEETWISE_API SignalCatalogSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API SignalCatalogSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the signal catalog.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the signal catalog.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the signal catalog.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the signal catalog.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the signal catalog.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the signal catalog.</p>
     */
    inline SignalCatalogSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the signal catalog.</p>
     */
    inline SignalCatalogSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the signal catalog.</p>
     */
    inline SignalCatalogSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline SignalCatalogSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline SignalCatalogSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the signal catalog.</p>
     */
    inline SignalCatalogSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline SignalCatalogSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the signal catalog was created in seconds since epoch (January 1,
     * 1970 at midnight UTC time). </p>
     */
    inline SignalCatalogSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the signal catalog was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The time the signal catalog was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>The time the signal catalog was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>The time the signal catalog was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>The time the signal catalog was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline SignalCatalogSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The time the signal catalog was last updated in seconds since epoch (January
     * 1, 1970 at midnight UTC time). </p>
     */
    inline SignalCatalogSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
