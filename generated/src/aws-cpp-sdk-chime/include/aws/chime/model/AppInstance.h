﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The details of an <code>AppInstance</code>, an instance of an Amazon Chime
   * SDK messaging application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/AppInstance">AWS
   * API Reference</a></p>
   */
  class AppInstance
  {
  public:
    AWS_CHIME_API AppInstance();
    AWS_CHIME_API AppInstance(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API AppInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the messaging instance.</p>
     */
    inline const Aws::String& GetAppInstanceArn() const{ return m_appInstanceArn; }
    inline bool AppInstanceArnHasBeenSet() const { return m_appInstanceArnHasBeenSet; }
    inline void SetAppInstanceArn(const Aws::String& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = value; }
    inline void SetAppInstanceArn(Aws::String&& value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn = std::move(value); }
    inline void SetAppInstanceArn(const char* value) { m_appInstanceArnHasBeenSet = true; m_appInstanceArn.assign(value); }
    inline AppInstance& WithAppInstanceArn(const Aws::String& value) { SetAppInstanceArn(value); return *this;}
    inline AppInstance& WithAppInstanceArn(Aws::String&& value) { SetAppInstanceArn(std::move(value)); return *this;}
    inline AppInstance& WithAppInstanceArn(const char* value) { SetAppInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AppInstance& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AppInstance& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AppInstance& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata of an <code>AppInstance</code>.</p>
     */
    inline const Aws::String& GetMetadata() const{ return m_metadata; }
    inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
    inline void SetMetadata(const Aws::String& value) { m_metadataHasBeenSet = true; m_metadata = value; }
    inline void SetMetadata(Aws::String&& value) { m_metadataHasBeenSet = true; m_metadata = std::move(value); }
    inline void SetMetadata(const char* value) { m_metadataHasBeenSet = true; m_metadata.assign(value); }
    inline AppInstance& WithMetadata(const Aws::String& value) { SetMetadata(value); return *this;}
    inline AppInstance& WithMetadata(Aws::String&& value) { SetMetadata(std::move(value)); return *this;}
    inline AppInstance& WithMetadata(const char* value) { SetMetadata(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which an <code>AppInstance</code> was created. In epoch
     * milliseconds.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline AppInstance& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline AppInstance& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time an <code>AppInstance</code> was last updated. In epoch
     * milliseconds.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline AppInstance& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline AppInstance& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceArn;
    bool m_appInstanceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
