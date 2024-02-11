/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>This API is in preview release for Amazon Connect and is subject to
   * change.</p> <p>Information about associations that are successfully created:
   * <code>DataSetId</code>, <code>TargetAccountId</code>,
   * <code>ResourceShareId</code>, <code>ResourceShareArn</code>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AnalyticsDataAssociationResult">AWS
   * API Reference</a></p>
   */
  class AnalyticsDataAssociationResult
  {
  public:
    AWS_CONNECT_API AnalyticsDataAssociationResult();
    AWS_CONNECT_API AnalyticsDataAssociationResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AnalyticsDataAssociationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the dataset.</p>
     */
    inline const Aws::String& GetDataSetId() const{ return m_dataSetId; }

    /**
     * <p>The identifier of the dataset.</p>
     */
    inline bool DataSetIdHasBeenSet() const { return m_dataSetIdHasBeenSet; }

    /**
     * <p>The identifier of the dataset.</p>
     */
    inline void SetDataSetId(const Aws::String& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = value; }

    /**
     * <p>The identifier of the dataset.</p>
     */
    inline void SetDataSetId(Aws::String&& value) { m_dataSetIdHasBeenSet = true; m_dataSetId = std::move(value); }

    /**
     * <p>The identifier of the dataset.</p>
     */
    inline void SetDataSetId(const char* value) { m_dataSetIdHasBeenSet = true; m_dataSetId.assign(value); }

    /**
     * <p>The identifier of the dataset.</p>
     */
    inline AnalyticsDataAssociationResult& WithDataSetId(const Aws::String& value) { SetDataSetId(value); return *this;}

    /**
     * <p>The identifier of the dataset.</p>
     */
    inline AnalyticsDataAssociationResult& WithDataSetId(Aws::String&& value) { SetDataSetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the dataset.</p>
     */
    inline AnalyticsDataAssociationResult& WithDataSetId(const char* value) { SetDataSetId(value); return *this;}


    /**
     * <p>The identifier of the target account. </p>
     */
    inline const Aws::String& GetTargetAccountId() const{ return m_targetAccountId; }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline bool TargetAccountIdHasBeenSet() const { return m_targetAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline void SetTargetAccountId(const Aws::String& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = value; }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline void SetTargetAccountId(Aws::String&& value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId = std::move(value); }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline void SetTargetAccountId(const char* value) { m_targetAccountIdHasBeenSet = true; m_targetAccountId.assign(value); }

    /**
     * <p>The identifier of the target account. </p>
     */
    inline AnalyticsDataAssociationResult& WithTargetAccountId(const Aws::String& value) { SetTargetAccountId(value); return *this;}

    /**
     * <p>The identifier of the target account. </p>
     */
    inline AnalyticsDataAssociationResult& WithTargetAccountId(Aws::String&& value) { SetTargetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the target account. </p>
     */
    inline AnalyticsDataAssociationResult& WithTargetAccountId(const char* value) { SetTargetAccountId(value); return *this;}


    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline const Aws::String& GetResourceShareId() const{ return m_resourceShareId; }

    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline bool ResourceShareIdHasBeenSet() const { return m_resourceShareIdHasBeenSet; }

    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline void SetResourceShareId(const Aws::String& value) { m_resourceShareIdHasBeenSet = true; m_resourceShareId = value; }

    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline void SetResourceShareId(Aws::String&& value) { m_resourceShareIdHasBeenSet = true; m_resourceShareId = std::move(value); }

    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline void SetResourceShareId(const char* value) { m_resourceShareIdHasBeenSet = true; m_resourceShareId.assign(value); }

    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline AnalyticsDataAssociationResult& WithResourceShareId(const Aws::String& value) { SetResourceShareId(value); return *this;}

    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline AnalyticsDataAssociationResult& WithResourceShareId(Aws::String&& value) { SetResourceShareId(std::move(value)); return *this;}

    /**
     * <p>The Resource Access Manager share ID.</p>
     */
    inline AnalyticsDataAssociationResult& WithResourceShareId(const char* value) { SetResourceShareId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline const Aws::String& GetResourceShareArn() const{ return m_resourceShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline void SetResourceShareArn(const Aws::String& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline void SetResourceShareArn(Aws::String&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline void SetResourceShareArn(const char* value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline AnalyticsDataAssociationResult& WithResourceShareArn(const Aws::String& value) { SetResourceShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline AnalyticsDataAssociationResult& WithResourceShareArn(Aws::String&& value) { SetResourceShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Resource Access Manager share. </p>
     */
    inline AnalyticsDataAssociationResult& WithResourceShareArn(const char* value) { SetResourceShareArn(value); return *this;}

  private:

    Aws::String m_dataSetId;
    bool m_dataSetIdHasBeenSet = false;

    Aws::String m_targetAccountId;
    bool m_targetAccountIdHasBeenSet = false;

    Aws::String m_resourceShareId;
    bool m_resourceShareIdHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
